#include<stdio.h>
using namespace std;

int main(){

    int n, suma;
    suma = 0;
    printf("Introduceti un nr in intervalul[0, 100.000]: ");
    scanf("%d", &n);
    
    for ( int i = 0; i < 100.000; i++){
        suma += n % 10;
        n = n / 10;
    }
    printf("Suma cifrelor este: %d", suma);
return 0;
}