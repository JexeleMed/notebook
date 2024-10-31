// Jakub Majer 1F
#include <iostream>
#include <math.h>
using namespace std;

float a,b,c=0; // wspó³czynniki równania
float delta=0; // delta równania
float x1,x2=0; //x1 jedno rozwi¹zanie równania, x2 drugie opcjonalne rozwi¹zanie równania
	
int main ()
{
	setlocale( LC_ALL, "" ); // polskie znaki
cout <<"y = ax^2 + bx +c"<< endl; // wzór równania

//wprowadzanie wspó³ycznników
cout <<"Podaj liczbê a:" << endl;
cin >> a;
cout <<"Podaj liczbê b:" << endl;
cin >> b;
cout <<"Podaj liczbê c:" << endl;
cin >> c;

float delta =(pow(b, 2.0))-4*a*c; //wzór na deltê równania (delta równania)
	
// warunki dot. wyników w zale¿noœci od wartoœci delty	
	if(delta<0) // delta < 0
	{
		cout<<"Równanie nie ma ¿adnych pierwiastków" << endl;	
	}
	
	
	if (delta==0) // delta = 0
	{
		float x1= -b/(2*a);
		cout <<"Równianie posiada jedno rozwi¹zanie"<< x1 << endl;
		cout<<"x = " << x1 << endl;
	}


	if (delta>0)
	{
		float x1=(-b-sqrt(delta))/(2*a);
		float x2=(-b+sqrt(delta))/(2*a);
		cout <<"Równanie posiada dwa rozwi¹zania" << endl;
		cout <<"x = " << x1 <<" lub x = " << x2 << endl;	
	}	
	
	
	return 0;
}
