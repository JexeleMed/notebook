#include <iostream>
#include <string>
#include <stdlib.h>

int solve(std::string s){
      std::string numbers;
      std::string temp;
        for(int i = 0; i < s.length(); i++)
        {
            while(isdigit(s[i])) {
                numbers += s[i];
                std::cout<<"n:" <<numbers<< std::endl;
                i++;
            }
            if(numbers>=temp){
                temp = numbers;
                std::cout<<"t:"<< temp << std::endl;
                numbers.clear();
            }
            else 
                numbers.clear();              
        }
            return stoi(temp);
}
int main()
{
    std::string s = "185lu1j8qbbb85";

    std::cout<< solve(s);
}