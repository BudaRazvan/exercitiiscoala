#include<stdio.h>
using namespace std;

int main(){

    int x[40][40], y[40][40], c[40][40], n, m;
    scanf("%d %d", &n, &m);



    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            scanf("%d", &x[i][j]);
        }
    }
    printf("\n");

    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            scanf("%d", &y[i][j]);
        }
    }
    printf("\n");

    printf("Suma celor doua matrici este: ");
    for ( int i = 0; i < n; i++){
        printf("\n");
        for( int j = 0; j < m; j++){
            printf("%d ", x[i][j]+y[i][j]);
        }
    
    }
    printf("\n");
    printf("Produsul celor doua matrici este: ");
    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            c[i][j] = 0;
            for ( int k = 0; k < n; k++){
                c[i][j] = c[i][j] + x[i][k] * y[k][j];
            }
        }
    }
    printf("\n");

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }





return 0;
}