#include <iostream>
#include <string>
#include <cctype>

std::string abbrevName(std::string name)
{
	
	for(int x;x<name.length();x++)
		{
			name[x] = std::toupper(name[x]);
		}
	int pos = name.find(" ");
	return name.substr(0,1)+"."+name.substr(pos+1, 1);
}


int main()
{
	std::string c ="ciasteczko kurwa";
	
	std::cout<<abbrevName(c);
}
