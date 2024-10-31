#include <iostream>  
using namespace std;

int centuryFromYear(int year)
{
	int units,tens,hundreds,thousands, thousands10, thousands100, millions;

    units = year%10;
    year /= 10;
    tens = year%10;
    year /= 10;
    hundreds = year%10;
    year /= 10;
    thousands = year%10;
    year /= 10;
    thousands10 = year%10;
    year /= 10; 
    thousands100 = year%10;
    year /= 10;   
    millions = year%10;
    year /= 10;
    
    int n = millions * 10000 + thousands100 * 1000 + thousands10 * 100 + thousands * 10 + hundreds + 1;
    
    if(tens * 10 + units < 1)
    	return n - 1;
    else 
    	return n;
}
   
   
int main()
{
	int input;
    cout << "Enter year: ";
    cin >> input;
    cout<<endl<<"This is your century: ";
    cout <<centuryFromYear(input);
}
