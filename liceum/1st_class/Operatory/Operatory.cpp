// JAKUB MAJER 1F
#include <iostream>
#include <math.h>

using namespace std;


int a=5; // zmienna pierwsza
int b=7; // zmienna druga

int main(){
	setlocale( LC_ALL, "" );

cout << "Początkowa wartość zmiennej: " << a << endl; // przed inkrementacją 
cout << "Wartość zmiennej po operacji: "<< ++a << endl; // po inkrementacji

cout << "________________________________________________________" << endl;

cout << "Początkowa wartość zmiennej: "<< b << endl; // przed dekrementacją
cout << "Wartość zmiennej po operacji: "<< --b << endl; // po dekrementacji

return 0;
}
