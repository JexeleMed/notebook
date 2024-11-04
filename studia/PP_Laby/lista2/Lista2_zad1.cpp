// Jakub Majer 
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

//Zadanie 1_A

int main() {
    printf("Dzies\tZnak\tSzes\tOsem\n");
    for (int i = 32; i <= 127; i++) {
        printf("%d\t%c\t%X\t%o\n", i, i, i, i);
    }
    return 0;
}

//Zadanie 1_B

// int main() {

//     for(int i = 0; i <= 10; i++){
//         printf("Pi z dokladnoscia do %d miejsc po przecinku: %.*f\n", i, i, M_PI);
//     }

//     return 0;

// }


//Zadanie 1_C

// int main(){
    
//     for(int i = 0; i <=10; i++){
//         std::cout << "Pi z dokladnoscia do " << i << "miejsc po przecinku: ";
//         std::cout << std::fixed << std::setprecision(i) << M_PI << std::endl;
//     }
//     return 0;
// }



//Zadanie 1_D

// int main(){
//     double x, suma, srednia, min, max = 0;
//     std::cout << "Podaj liczbe: ";
//     std::cin >> x;
//     suma = x;
//     min = x;
//     max = x;

//     for(int i = 0; i < 9; i++){
//         std::cout << "Podaj liczbe: ";
//         std::cin >> x;
//         suma +=x;
//         if(x>max){
//             max = x;
//         }
//         if(x<min){
//             min = x;
//         }
//     }
//     std::cout << "Suma: " << suma << std::endl;
//     std::cout << "Srednia: " << suma/10 << std::endl;
//     std::cout << "Wartosc minimalna: " << min << std::endl;
//     std::cout << "Wartosc maksymalna: " << max << std::endl;

//     return 0;
// }

//Zadanie 1_E

// int main(){
//     int n = 0;
//     double suma = 0;
//     std::cout << "Podaj n: ";
//     std::cin >> n;

//     for(int k = 1; k <=n; k++){
//         suma += 1.0 / (3*k + 1);
//     }

//     std::cout << "Suma szeregu wynosi: " << suma;
//     return 0;
// }

