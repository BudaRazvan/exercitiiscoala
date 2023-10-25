#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int v[40][40];
    int n, m, l, c;
    scanf("%d %d", &n, &m);
    
    for ( int i = 0; i < m; i++){
        for( int j = 0; j < n; j++){
            scanf("%d", &v[i][j]);
        }
        
    }
    
    printf("\n");


    printf("Linia de sters: ");
    scanf("%d", &l);
    
    for(int i = l; i < n + 1  ; i++){
        for( int j = 0; j < n; j++){
            v[i][j]=v[i+1][j];
        }
    }
    
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    printf("Coloana de sters: ");
    scanf("%d", &c);
    
    for( int i = 0; i < n; i++){
        for( int j = c; j < n - 1; j++){
            v[i][j] = v[i][j+1];
        }
    }
    n--;

    for( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }



return 0;
}
