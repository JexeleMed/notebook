#include <iostream>


int main(){

    int i = 3;
    int j = 4; 
    int k = 5;



    //std::cout << "a) k==++i+j++ wynosi" << k==++i+j++;
    k==++i+j++;
    std::cout << "a: i = "<< i << " j = " << j << " k = " << k << std::endl;

    i = 3;
    j = 4;
    k = 5;

    k=i++*++j;
    std::cout << "b: i = "<< i << " j = " << j << " k = " << k << std::endl;
    
    i = 3;
    j = 4;
    k = 5;

    k=i+++--j;
    std::cout << "c: i = "<< i << " j = " << j << " k = " << k << std::endl;
    
    i = 3;
    j = 4;
    k = 5;

    k=-i++/++j;
    std::cout << "d: i = "<< i << " j = " << j << " k = " << k << std::endl;

    i = 3;
    j = 4;
    k = 5;

    k=-i++-j--;
    std::cout << "e: i = "<< i << " j = " << j << " k = " << k << std::endl;

    i = 3;
    j = 4;
    k = 5;

    k+=-i++-++j;
    std::cout << "f: i = "<< i << " j = " << j << " k = " << k << std::endl;
 
    i = 3;
    j = 4;
    k = 5;

    // Tutaj blad kompilatora k=i+++++j;
    //Mozliwe rozwiazanie
    //k=i++ + ++j
    //std::cout << "g: i = "<< i << " j = " << j << " k = " << k << std::endl;

    i = 3;
    j = 4;
    k = 5;

    k=*&i*j;
    std::cout << "h: i = "<< i << " j = " << j << " k = " << k << std::endl;
    i = 3;
    j = 4;
    k = 5;

    // nalezy zadeklarowac pointer by zadzialalo, inaczej blad kompilatora
    // int *p = &i;
    // k=*p*j;
    // std::cout << "i: i = "<< i << " j = " << j << " k = " << k << std::endl;

    i = 3;
    j = 4;
    k = 5;

    -k--==--i;
    std::cout << "j: i = "<< i << " j = " << j << " k = " << k << std::endl;

    i = 3;
    j = 4;
    k = 5;

    k^=i^j;
    std::cout << "k: i = "<< i << " j = " << j << " k = " << k << std::endl;


    i = 3;
    j = 4;
    k = 5;

    ++k==++k+--i^j--;
    std::cout << "l: i = "<< i << " j = " << j << " k = " << k << std::endl;

    
    return 0;
}