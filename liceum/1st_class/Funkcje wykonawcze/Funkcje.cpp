// Jakub Majer 1F
#include <iostream>
#include <cstdlib>
float a,b=0;
using namespace std;
float dodawanie(float a, float b)
{
	return a+b;
}
float odejmowanie(float a, float b)
{
	return a-b;
}
float mnozenie(float a, float b)
{
	return a*b;
}
float dzielenie(float a, float b)
{
	return a/b;
}



int main(int argc, char** argv) 
{
setlocale(LC_CTYPE, "Polish"); 
cout <<"Wartoœæ a:"<<endl;
	cin >> a;
cout <<"Wartoœæ b:"<<endl;
	cin >> b;	

  cout << "Suma liczb a oraz b: " << dodawanie(a,b) <<endl;
  cout << "Ró¿nica liczb a oraz b: " << odejmowanie(a,b) << endl;
  cout << "Iloczyn liczb a oraz b: " << mnozenie(a,b) <<endl;
  cout << "Iloraz liczb a oraz b: " << dzielenie(a,b) <<endl;
    
}
