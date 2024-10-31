#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    long double pi, arctan1_5 = 0, arctan1_239 = 0, p1_5_n, p1_239_n;
    int n, znak;
   
   
    n = 1;
    znak = 1;
    do
    {
        p1_5_n = 1;
        for( int i = 1; i <= n; i++ ) p1_5_n = p1_5_n / 5;
       
        arctan1_5 = arctan1_5 + znak * p1_5_n / n;
        znak = znak *( - 1 );
        n = n + 2;
    } while(( p1_5_n / n ) != 0 );
   
    pi = 16 * arctan1_5;
   
    n = 1;
    znak = 1;
    do
    {
        p1_239_n = 1;
        for( int i = 1; i <= n; i++ ) p1_239_n = p1_239_n / 239;
       
        arctan1_239 = arctan1_239 + znak * p1_239_n / n;
        znak = znak *( - 1 );
        n = n + 2;
    } while(( p1_239_n / n ) != 0 );
   
    pi = pi - 4 * arctan1_239;
   
    cout << "pi=" << setprecision( 16 ) << pi;
    return 0;
}
