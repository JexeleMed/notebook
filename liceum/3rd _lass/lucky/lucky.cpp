//Majer Jakub 3F


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <math.h>


using namespace std;


void fillArray(int arr1[], int arrLength)
    {
        for(int i = 0; i < arrLength; i++) {
            arr1[i] = i + 1;
        }
    }

void luckyNumberGenerator(int inputArrLength, int luckyNumbers[])
    {

        luckyNumbers[0]=1;

        bool flag = false, isNextLucky;
        int counter, arrCounter = 1, luckyNumber= 2, *arr, *arr1;

        arr1 = new int[inputArrLength];

        fillArray(arr1, inputArrLength);

        while(luckyNumber < inputArrLength)
            {
                isNextLucky = false;
                counter = 0;
                
                arr = new int[inputArrLength];

                for(int i = 0; i < inputArrLength; i++)
                    {
                        if((i+1) % luckyNumber != 0 && flag)
                            {
                                arr[counter] = arr1[i];
                                counter++;
                            }
                        else if(i % luckyNumber == 0 && !flag)
                            {
                                arr[counter] = arr1[i];
                                counter++;
                            }
                    }
                flag = true;
                counter = 0;

                while(!isNextLucky)
                    {
                        if(luckyNumber < arr[counter])
                            {
                                luckyNumber = arr[counter];
                                isNextLucky = true;
                                luckyNumbers[arrCounter] = luckyNumber;
                                arrCounter++;

                            }
                        counter++;
                    }
                arr1 = arr;
            }

    }

bool isLucky(int inputValue, int luckyNumbers[])
    {
        for(int i = 0; i < 10000; i++)
            {
                if(luckyNumbers[i] == inputValue) return true;
                if(luckyNumbers[i] > inputValue) return false;
            }
    }

bool isPrime(int inputValue) 
    {
        if(inputValue <= 2)
            return false;

        for(int i = 2; i <= sqrt(inputValue); i++)
            {
                if(inputValue % i == 0)
                    return false;
            }
        return true;
    }


int main()
{
	cout <<"START"<< endl;
    int *luckyNumbers;
    luckyNumbers = new int[1000];

    fstream read;

    int inputValue, counter4_1 = 0, counter4_2 = 1, counter4_3 = 0, maxTrain4_2 = 1, firstInTrain, tempFirstInTrain;
    bool previousLucky = false;

    luckyNumberGenerator(10000, luckyNumbers);
    cout<<"Numbers generated!" << endl;


    std::ifstream file("dane.txt");
    if (!file.is_open()) {
        std::cout << "Failed to open file\n";
        return 1;
    }
    else
        cout << "File loaded" << endl;

    std::vector<int> v;
    std::string line;
    while (std::getline(file, line)) {
        bool valid = true;
        for (char c : line) {
            if (!std::isdigit(c)) {
                valid = false;
                break;
            }
        }
        if (valid) {
            v.push_back(std::stoi(line));
        }
       
    }
    file.close();
    int checker= 1;
   


    for(int x : v)
        {
            inputValue = x;

            if(isLucky(inputValue, luckyNumbers))
                {
                    cout << checker<<". "<< inputValue << endl;
                    checker++;
                    
                    counter4_1++;
            
                    if(previousLucky)
                        counter4_2++;
                
            
                     if(counter4_2 == 1)
                        tempFirstInTrain = inputValue;
            
                     if(isPrime(inputValue))
                        counter4_3++;
            
                    if(counter4_2 > maxTrain4_2)
                        {
                             maxTrain4_2 = counter4_2;
                            firstInTrain = tempFirstInTrain;
                        }

                    previousLucky = true;
                }
            else 
            {
                previousLucky = false;
                counter4_2 = 1;
            }
            
        }

        read.close();



    cout << "4.1: " << counter4_1 << endl;
    cout << "4.2: " << maxTrain4_2 <<" pierwsza liczba ciagu: " << firstInTrain <<  endl;
    cout << "4.3: " << counter4_3 << endl;

    cout <<"STATUS: Completed \nExiting";  
    return 0;
}
