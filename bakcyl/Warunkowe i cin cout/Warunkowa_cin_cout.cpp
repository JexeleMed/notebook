#include <iostream>
#include <sstream>
using namespace std;
int main() 
{
    string haslo;
    cout<<"Podaj haslo: ";
    cin>>haslo;
    if(haslo == "orzel")
        {
            cout<<"Haslo poprawne";
        }
    else
        {
            cout<<"Haslo niepoprawne";
        }
}
