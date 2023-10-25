#include<stdio.h>
#include<time.h>
#include <cstdlib>
#include<iostream>
using namespace std;

int main(){

    srand(time(0));
    int n = 5000 + rand() % (9999 - 5000 + 1);
    int rasturnat = 0;
    printf("Numarul generat este: %d", n);

    while( n > 0 ){
        rasturnat = rasturnat * 10 + n % 10;
        n = n / 10;
    }
    printf("\n");
    printf("Rasturnatul este: %d", rasturnat);
    

return 0;
}