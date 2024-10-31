#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <sstream>
#include <iterator>
#include <algorithm>

using namespace std;


int shithappens(int x)
    {
        int counter=0;
        char a[64];
        string s, s1;
            for(int i = 2; i < 17; i++)
                {
                    s = itoa(x, a, i);
                    s1 = itoa(x, a, i);
                    reverse(s.begin(), s.end());

                    if (s1 == s)
                        counter++;
                }
        return counter;
    }
void shithappensnow(int x)
    {
        int counter=0;
        char a[64];
        string s, s1;
        cout<<"\t";
            for(int i = 2; i < 17; i++)
                {
                    s = itoa(x, a, i);
                    s1 = itoa(x, a, i);
                    reverse(s.begin(), s.end());

                    if (s1 == s)
                        cout << i <<" "; ;
                }
        cout <<endl;
        
    }


int main()
{
    
cout <<"START"<< endl;
    fstream read;

    ifstream file("dane.txt");
    if (!file.is_open()) {
        cout << "Failed to open file\n";
        return 1;
    }
    else
        cout << "File loaded" << endl;

    int check=1;
    vector<int> v;
    string line;
    v.push_back(4693);

    while (getline(file, line)) {
        bool valid = true;
        for (char c : line) {
            if (!isdigit(c)) {
                valid = false;
                break;
            }
        }
        if (valid) {
            v.push_back(stoi(line));
        }
       
    }
    file.close();
    cout <<"Finished reading "<< v.size() << " numbers from file";
    string s;
    string s1;
    cout <<endl;
    int counter1=0;
    int counter2=0;      

    cout << "Start"<< endl;
    char b[64];


    for(int x : v) // binarne i szesnastkowe
        {  
        s = itoa(x, b, 2);
        s1 = itoa(x, b, 2);
        reverse(s.begin(), s.end());

            if (s1 == s)
                counter1++;
                

        s = itoa(x, b, 16);
        s1 = itoa(x, b, 16);
        reverse(s.begin(), s.end());

            if (s1 == s)
                counter2++;
                

        }
        cout << "Zadanie nr 1: "<<counter1<<endl;
        cout << "Zadanie nr 2: "<<counter2<<endl;
    vector<int> tab;
    int countertemp= 0;
    for(int n = 2; n < 17; n++)
        {
            for(int x : v)
                {
                    s = itoa(x, b, n);
                    s1 = itoa(x, b, n);
                    reverse(s.begin(), s.end());

                    if (s1 == s)
                        countertemp++;
                }
            tab.push_back(countertemp);
            countertemp=0;
        }
    int temp = 2;
    for(int x : tab)
        {
            cout << endl << temp<< ". "<< x;
            temp++;
        }



    cout << endl << endl << endl << "Zadanie 4: " << endl << endl;
    int check1, check2, check3 = 0;
    int place1, place2, place3 = 0;
    for(int x : v)
        {
            if(shithappens(x)>check1)
                {
                check3 = check2;
                check2 = check1;
                
                check1 = shithappens(x);
                place1 = x;
                }
            else if(shithappens(x)>check2)
                {
                check3 = check2;

                check2 = shithappens(x);
                place2 = x;
                }
            else if(shithappens(x)>check3)
                {
                check3 = shithappens(x);
                place3 = x;
                }
        }
    
    cout << place1<< "\t" << check1 <<"\t";
    shithappensnow(place1);
    cout << endl;
    cout << place2<< "\t" << check2 << "\t";
    shithappensnow(place2);
    cout << endl;
    cout << place3<< "\t" << check3 << "\t";
    shithappensnow(place3);
    cout << endl;

    return 0;
    
    
}