#include<stdio.h>
using namespace std;

int main(){

    int nr, rezultat = 0, putere = 1;
    scanf("%d", &nr);

    while( nr != 0){
        int rest = nr % 2; 
        rezultat = rezultat + rest * putere;
        putere = putere * 10; 
        nr = nr / 2;
    }
    printf("Rezultatul este %d", rezultat);

return 0;
}