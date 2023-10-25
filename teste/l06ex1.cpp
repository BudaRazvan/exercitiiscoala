#include<iostream>
#include<stdio.h>
using namespace std;


    void maximMinim( int n, int v[] ){
        int min = INT_MAX;
        int max = INT_MIN;
        for( int i = 1; i <= n; i++){
            if ( v[i] < min ){
                min = v[i];
            }
            if( v[i] > max ){
                max = v[i];
            }
        }
        printf("Maximul elementelor este: %d\nMinimul elementelor este: %d\n", max, min);
    }

    void SumProd( int n, int v[]){
        int sum = 0;
        int prod = 1;
            for( int i = 1; i <= n; i++){
                sum = sum + v[i];
                prod = prod * v[i];
            }
             printf("Suma numerelor: %d\nProdusul numerelor: %d\n", sum, prod);
    }

    void eliminare( int n, int v[], int k){
        for ( int i = k; i < n; i++){
            v[i] = v[ i + 1];
        }
        n--;
    }
    void inserare( int n, int v[], int k, int y){
        for( int i = k; i < n; i--){
            v[i] = v[ i - 1 ];
        }
        v[k] = y;
    }
    void afisare(int n, int v[]) {
        for (int i = 1; i <= n; i++) {
        printf("%d ", v[i]);
    }
   
}




int main(){

    int n, v[40];
    scanf("%d", &n);

    for(int i = 1; i <=n; i++){
        scanf("%d", &v[i]);
    }
    maximMinim(n, v);
    SumProd(n, v);
    afisare( n, v);

return 0;
}