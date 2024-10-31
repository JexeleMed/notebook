//Jakub Majer 1F
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int a,b,c=0;  // a - wymiar tablicy , b - zakres liczby losowanej (od), c - zakres liczb losowanych (do)
int x,y=0;   // x- liczba wierszy, y- liczba kolumn
int i,z=0; 	// zmienne wykorzystywane do œladu macierzy, z- œlad macierzy
int main ()
{
	srand( time( NULL ) );

	setlocale( LC_ALL, "" ); 
	cout<<"Podaj wymiar macierzu kwadratowego:"<< endl;
	cin >> a;
	cout<< "Zakres liczb losowanych"<< endl;
	cout<<"od:" << endl;
	cin >> b;
	cout<<"do"<< endl;
	cin>> c;
	

/*-------------------------------------------------*/		  
	int tab1[a][a];
	for(x=0;x<a;x++) // wiersze
    {
        for(int y=0;y<a;y++) // kolumny
        {
            
            tab1[x][y]=rand()%c+b; // przypisanie komórkom w tablicy wartoœci
             
        }
    }
/*-------------------------------------------------*/
 cout<<"Wypelniona tablica: "<<endl;
    for(x=0;x<a;x++) // wiersze
    {
        cout<<"\n";
	    for(y=0;y<a;y++) // kolumny
          {
			
			cout<<tab1[x][y]<<"\t";
            
		  }
	}
    cout<<endl;
	
/*-------------------------------------------------*/
	for(i=0;i<a;i++)
		{
			z=z+tab1[i][i];
		}
	cout<<"_________________________________________________"<<endl;
	cout<<endl;
	cout<<"Œlad macierzy: "<< z <<endl;

}
