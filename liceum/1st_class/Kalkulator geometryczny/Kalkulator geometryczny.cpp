// JAKUB MAJER 1F
#include <iostream>
#include <math.h>
using namespace std;

int a,b,c,d,x; //a- bok 1, b - bok 2, c - obwód, d - pole, x - suma kwadratów boków

int main() {
setlocale( LC_ALL, "" ); //lub czasem setlocale( LC_ALL, "pl_PL" );


cout << "Podaj miarê pierwszego boku: "; // bok 1	
cin >> a;
cout << "Pierwszy bok ma miarê:   " << a << endl;	


cout << "Podaj miarê drugiego boku: "; // bok 2
cin >> b;
cout << "Drugi bok ma miarê: " << b << endl;
cout << "_______________________________" << endl;


int c=a+a+b+b; // obwód
int d=a*b;


cout << "Obwód wynosi: " << c << endl;
cout << "Pole wynosi: " << d << endl;
x=pow (a, 2.0)+ pow (b, 2.0); // suma kwadratów boków
cout <<"Przek¹tna ma miarê: " << sqrt (x)<< endl; // przek¹tna
	return 0;
}
