//Pointers
#include <iostream>

using namespace std;
int main()
{

int a;
int *p;
a = 10;
p = &a;

cout<<p<<endl;
cout<<*p<<endl;
cout<<&a<<endl;

cout<<p+1<<endl; // jesli dodaje 1 do wskaznika to adres wskazywany zwieksza sie o 4 bajty

}