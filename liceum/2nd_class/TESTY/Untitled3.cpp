#include<iostream>
#include<cstdlib>
using namespace std;

void zamien(int a,int b)
{
        int pom = *a;
        *a = *b;
        *b = pom;
}

void sortuj(int *a, int b, intc, intd)
{
        if(a>b)
            zamien(a,b);
        if(a>c)
            zamien(a,c);
        if(a>d)
            zamien(a,d);
        if(b>c)
            zamien(b,c);
        if(b>d)
            zamien(b,d);
        if(c>*d)
            zamien(c,d);
}

int main ()
{
    int a,b,c,d;

    cout<<"podaj cztery liczby : ";
    cin>>a>>b>>c>>d;

    sortuj(&a,&b,&c,&d);

    cout<< "liczby posortowane : "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    system("pause");
    return 0;
}
