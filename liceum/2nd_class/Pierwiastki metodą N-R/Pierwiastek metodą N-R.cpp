//Jakub Majer 2F
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <cstdio>

using namespace std;

const double eps = 0.000001;

double pierwiastek(double P, double eps)
{
	   double a = 1., b = P;
       

       while(fabs(a-b)>=eps) 
       {
           a = (a+b)/2.;   
           b = P/a;
       }
 
       return a; 
}
 
int main()
{
	srand( time( NULL ) );
	setlocale(LC_CTYPE, "Polish");
    double tab[25]={};
	double x;
	
	
	
//___________________Tworzenie pliku _________________________	  
	ofstream zapis("dane.txt");
	for(int i=0;i<25;i++)
		{	
			tab[i]=rand()%71+4;
			zapis<<tab[i]<<"\n";
		}
	zapis.close();
//_________________Odczyt i pierwiastkowanie__________________
	ofstream zap("wyniki.txt");
	ifstream odczyt("dane.txt");
	if(odczyt.is_open())
	{
		char wiersz[10000];//maksymalnie 9999 znaków w wierszu
		while(odczyt.getline(wiersz,10000)) //dopóki jest co czytaæ
		{
			x=atoi(wiersz);
			zap<<fixed<<pierwiastek(x, eps)<<endl; //wypisz to co wczyta³es z pliku
		}
	}
	else
		cout<<"Nie uda³o siê otworzyæ pliku";
	
	zap.close();
	
    return 0;
}
