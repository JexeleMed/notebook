#include <string>
#include <iostream>

using namespace std;

bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U');
}

int solve(string s){
    int count = 0;
    int check = 0;
    for(unsigned long x=0; x<s.length(); x++)
        {
            if(isVowel(s[x]))
                {
                count++;
                cout <<"\n count is Vowel "<< count << "\t";
                    if(count>check)
                        check = count;
                }
           
            else if(isVowel(s[x])==0 && count>check)
                {
                cout << "\n count "<< count << "\t";
                cout << "\n check before "<< check << "\t";
                check = count;
                cout << "\n check after "<< check << "\t";
                count = 0;
                
                }
            else
                {
                count=0;
                }
        }
    return check;	
}



int main()
{

    cout << solve("mnopqriouaeiopqrstuvwxyuaeiouaeiou");

}