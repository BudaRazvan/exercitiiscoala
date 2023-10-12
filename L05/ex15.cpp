#include<iostream>
#include<stdio.h>
using namespace std;

     int cmmdc(int a, int b){   
        while( a != b ){
            if ( a > b ){
                a -= b;
            }
            if ( b > a ){
                b -= a;
            }
        }
        return a;
     }

    int cmmmc(int a, int b){
        return (a * b) / cmmdc(a, b);
    }




int main(){

    int a, b ;
    printf("Introduceti trei numere: ");
    scanf("%d %d", &a, &b);
    
    printf("cmmdc: %d\n", cmmdc(a, b));
    printf("cmmmc: %d\n", cmmmc(a, b));
   


return 0;
}