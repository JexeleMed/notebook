#include <iostream>
#include <memory>
#include <string>

void changeInput(std::string& str) // referencja do stringu
{
    str = "Foki lubia podgryzac radiostacje";
}

int main()
{

    std::unique_ptr<std::string> msg = std::make_unique<std::string>("Pingwiny lubia podgryzac kable"); // deklaracja smart pointera i przypisanie mu wartosci
    changeInput(*msg);
    std::cout<< *msg;
    return 0;

}