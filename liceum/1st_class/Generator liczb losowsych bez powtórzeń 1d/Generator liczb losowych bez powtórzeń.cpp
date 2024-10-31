//Jakub Majer 1F
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
const int d = 10; 
int main()
{

    int tab1[d], p, i, licznik;
    bool t;  // zmienna wykorzystana do sprawdzenia powtarzalnoœci liczb

    srand(time(NULL));  // inicjacja generatora liczb losowych

    licznik = 0;
    p=0;
    do
    {
        p = (rand() % 45)+1;  // zakres liczb losowanych

        t = true;
        for(i = 0; i < licznik; i++)
            if(tab1[i] == p)
            {
                t = false;
                break;
            }

        if(t) tab1[licznik++] = p;

    } while(licznik < d);


    for(i = 0; i < d; i++) cout << tab1[i] << " ";

    

    return 0;
}
