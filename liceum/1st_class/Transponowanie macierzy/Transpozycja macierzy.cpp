//Jakub Majer 1F
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int a1,a2,b,c=0;  // a - wymiar tablicy , b - zakres liczby losowanej (od), c - zakres liczb losowanych (do)
int x,y,z,p=0;   // x- liczba wierszy, y- liczba kolumn z- liczba wierszy po transpozycji, p - liczba kolumn po transpozycji
int main ()
{
	srand( time( NULL ) );

	setlocale( LC_ALL, "" ); 
	cout<<"Podaj wymiary macierzy:"<< endl;
	cout<< "Kolumny: ";
	cin >> a1;
	cout<<"Wiersze: ";
	cin >> a2;
	cout<< "Zakres liczb losowanych:"<< endl;
	cout<<"od: ";
	cin >> b;
	cout<<"do: ";
	cin>> c;
	
/*-------------------------------------------------*/		  
	int tab1[a1][a2];
	for(x=0;x<a2;x++) // wiersze
    {
        for(int y=0;y<a1;y++) // kolumny
        {
            
            tab1[x][y]=rand()%c+b; // przypisanie liczb losowych komórkom w tablicy
             
        }
    }
/*-------------------------------------------------*/
cout<<"Wypelniona macierz: "<<endl;
    for(x=0;x<a2;x++) // wiersze
    {
        cout<<"\n";
	    for(y=0;y<a1;y++) // kolumny
          {
			
			cout<<tab1[x][y]<<"\t";
            
		  }
	}
    cout<<endl;
/*-------------------------------------------------*/
cout<<endl<<"Macierz po transpozycji: ";
    for(x=0;x<a1;x++) // wiersze
    {
        cout<<"\n";
	    for(y=0;y<a2;y++) // kolumny
          {
	
			cout<<tab1[y][x]<<"\t";
        
		  }
	}
    cout<<endl;

   
}
