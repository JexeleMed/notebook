#include <iostream>
#include <vector>
#include <array>

int main()
{
	std::vector<float> temps{};
	double avgTemp{};
	double input{};
	char done{};
	while(true)
	{
		std::cout <<"Enter temperature: \n";
		std::cin>>input;
		temps.push_back(input);
		avgTemp += temps.back(); // .back to ostatni element
		
		std::cout<< "Is this the end? [y,n]\n";
		std::cin>>done;
		
		switch(done)
			{
				case 'y':
					avgTemp /= temps.size();
					std::cout<<"Average temperature was: "<< avgTemp << " Celsius degrees" << std::endl;
					return 0;
				case 'n':
					continue;
				default:
					std::cout << "I don't understand, exiting ";
					return 0;
			}
	}
}
