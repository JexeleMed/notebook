#include <string>
#include <iostream>

std::string DNAtoRNA(std::string dna)
{
  std::string RNA;
   for(char temp : dna)
     {
        if(temp == 'T')
          RNA = RNA +'U';
        else
          RNA = RNA + temp;
            
     }
      return RNA;
}


int main()
{
	std::string chain;
	
	std::cout <<"Enter your DNA chain: ";
	std::cin >> chain;
	
	std::cout<<"Your RNA is: " << DNAtoRNA(chain);
	
}
