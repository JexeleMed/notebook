// Jakub Majer 1F
// Obliczanie wartoœci funkcji trygonometrycznych dla wprowadzonych k¹tów
#include <iostream>
#include <math.h>
#include <windows.h> //Sllep(ms)
#include <stdlib.h> //system("CLS")
#define M_PI 3.14159265358979323846
using namespace std;
float a,b,rad=0;

//Funkcje obliczaj¹ce
float sinus(float rad)
{
	return sin(rad);
}
float cosinus(float rad)
{
	return cos(rad);
}
float tangens(float rad)
{
	return tan(rad);
}
float cotangens(float rad)
{
	return 1/tan(rad);
}
float przemiana(float a)
{
	rad = a*M_PI/180; // zamiana stopni na radiany
}


int main ()
{
	setlocale(LC_CTYPE, "Polish");
//Wartoœci pocz¹tkowe
	cout <<"Podaj k¹t: "<<endl;
	cin >> a;
	przemiana(a);
	unsigned short poz;

//MENU
for(;;)
{
	system("CLS");
	cout<<"1- Obliczanie sinusa"<<endl;
	cout<<"2- Obliczanie cosinusa"<<endl;
	cout<<"3- Obliczanie tangensa"<<endl;
	cout<<"4- Obliczanie cotangensa"<<endl;
	cout<<"5- Zmieñ miarê k¹ta"<<endl;
	cout<<"6- Wyjœcie"<<endl;
	
	cin>>poz;

	switch(poz)
	{
		case 1:
		{
			cout<<"Sinus k¹ta "<<a<<" wynosi: "<<sinus(rad)<< endl;
			Sleep(5000);
			break;
		}
		case 2:
		{
			cout<<"Cosinus k¹ta "<<a<<" wynosi: "<<cosinus(rad)<< endl;
			Sleep(5000);
			break; 
		}
		case 3:
		{
			cout<<"Tangens k¹ta "<<a<<" wynosi: "<<tangens(rad)<< endl;
			Sleep(5000);
			break;	
		}
		case 4:
		{	
			cout<<"Cotangens k¹ta "<<a<<" wynosi: "<<cotangens(rad)<< endl;
			Sleep(5000);
			break;			
		}
		case 5:
		{	
			cout<<"WprowadŸ miarê nowego k¹ta:"<<endl;
			cin >> a;
			przemiana(a);
			break;
		}
		case 6:
		{
			cout<<"Wychodzisz"<<endl;
			exit(0);
			break;
		}		
		default:
		{
		cout<<"Nie ma takiej pozycji";
		}
	}
	
}


}
