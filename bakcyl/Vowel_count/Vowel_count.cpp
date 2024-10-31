#include <string>
#include <iostream>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
    for(char temp : inputStr)
        {
          if(temp == 'a' or temp == 'e' or temp == 'i' or temp == 'o' or temp == 'u'  )
                num_vowels++;
        }
  return num_vowels;
}

int main()
{
 string str = "abracadarba";

 cout << "Liczba spolglosek" << getCount(str);


}