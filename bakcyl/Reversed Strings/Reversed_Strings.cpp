#include <string>
#include <iostream>
using namespace std ;  

string reverseString(string str )
{
  int len = str.length();
  int n=len-1;
  for(int i=0;i<(len/2);i++){
    char temp = str[i];
    str[i] = str[n];
    str[n] = temp;
    n = n-1;	
	}
	return str;
	
}
int main()
{
	string a = "Hello World";
	cout<<reverseString(a); 
}
