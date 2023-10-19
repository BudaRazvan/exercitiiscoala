#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    int n, v[30];
    scanf("%d", &n);
    int x = 0;

    for ( int i = 0; i <= n; i++){
        if ( v[i] != v[ n - i - 1 ] ){
            x = 1;
            printf(" Este simetric ");
        }
        
    }

        if ( x == 1 ){
            printf("Nu este simetric ");
        }


return 0;
}