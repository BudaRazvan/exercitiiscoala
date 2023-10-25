#include<stdio.h>
using namespace std;

int main(){

    // int n, bin = 0, p = 1;
    // scanf("%u", &n);
    // while ( n != 0 ){
    //     int rest = n % 2;
    //     bin = bin + rest * p;
    //     p = p * 10;
    //     n = n / 2;
    // }
    // printf("%d", bin);

    unsigned short m = 1;
    m = m << 15;
    for( int i = 0; i < 16; i++){
        unsigned short aux = ( nr & m);
        aux = aux >> 15;
        printf("%hu", aux);
        nr = nr << 1;
    }




return 0;
}