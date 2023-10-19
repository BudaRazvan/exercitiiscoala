#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int nr, rezultat = 0, putere = 1;
    scanf("%d", &nr);

    while( nr != 0){
        int cifra = nr % 10; 
        rezultat = rezultat + cifra * putere;
        putere = putere * 2;
        nr = nr / 10; 
    }
    printf("Rezultatul este %d", rezultat);

return 0;
}