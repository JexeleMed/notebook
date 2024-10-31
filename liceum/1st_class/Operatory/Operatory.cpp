// JAKUB MAJER 1F
#include <iostream>
#include <math.h>

using namespace std;


int a=5; // zmienna pierwsza
int b=7; // zmienna druga

int main(){
	setlocale( LC_ALL, "" );

cout << "Pocz¹tkowa wartoœæ zmiennej: " << a << endl; // przed inkrementacj¹ 
cout << "Wartoœæ zmiennej po operacji: "<< ++a << endl; // po inkrementacji

cout << "________________________________________________________" << endl;

cout << "Pocz¹tkowa wartoœæ zmiennej: "<< b << endl; // przed dekrementacj¹
cout << "Wartoœæ zmiennej po operacji: "<< --b << endl; // po dekrementacji

return 0;
}
