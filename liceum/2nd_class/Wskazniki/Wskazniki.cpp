//Jakub Majer 2F

#include <iostream>

using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	int wiekuzytkownika=100;
	int *ptr=0;
	ptr=&wiekuzytkownika;
	cout<<"adres zmiennej: "<<&wiekuzytkownika<<endl;
	cout<<"wartoœæ zmiennej: "<<wiekuzytkownika<<endl;
	cout<<"wartoœæ wskaŸnika: "<<ptr<<endl;
	cout<<"wartoœæ zmiennej wkazywanej przez ptr: "<<*ptr<<endl;
	return 0;
}
