#include <iostream>

using namespace std;


double potatoes(int p0, int w0, int p1)
{
 return w0 * (100-p0) / (100- p1);

}
    

int main()
{
    
    cout << potatoes(93, 129, 91);

}