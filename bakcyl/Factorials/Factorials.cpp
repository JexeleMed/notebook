#include <chrono>
#include <iostream>


long long rec(long long n)
{
 if(n<2)
        return 1; 

return n*rec(n-1); 
}

long long ite(long long n)
{

long long result=1;
	
	for(int i=1 ; i <= n ; i++)
	{
		result=result*i;
	}
	return result;

}


int main()
{
    
    int n;
    std::cout<<"Enter n: ";
    std::cin>> n;
    auto start = std::chrono::steady_clock::now();
    std::cout<<rec(n)<<std::endl;
    auto end = std::chrono::steady_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "Elapsed time using recursion: " << elapsed  << std::endl;

    auto loopStart = std::chrono::steady_clock::now();
    std::cout<<ite(n)<<std::endl;
    auto loopEnd = std::chrono::steady_clock::now();
    auto loopElapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(loopEnd - loopStart).count();
    std::cout << "Elapsed time using a for loop: " << loopElapsed << std::endl;
    

}