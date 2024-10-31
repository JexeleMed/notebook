//Kuba Majer 1F
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    int tab[5][4]; //deklaracja tablicy
    
    srand( time( NULL ) );
    setlocale( LC_ALL, "" ); 

    int b=-25;
    int c=120;
    int x,y;

//Wype³nienie
    for(x=0;x<5;x++) 
    {
        for(int y=0;y<4;y++) 
        {
            
            tab[x][y]=rand()%c+b; 
             
        }
    }

//Wyœwietlenie
    cout<<"Wypelniona tablica: "<<endl;
    for(x=0;x<5;x++) 
    {
        cout<<"\n";
        for(y=0;y<4;y++) 
          {
            
            cout<<tab[x][y]<<"\t";
            
          }
    }

}
