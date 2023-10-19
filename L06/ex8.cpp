#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;

    



int main(){

    int v[40][40];
    int n, m;
    scanf("%d %d", &n, &m);
    
    for ( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            scanf("%d", &v[i][j]);
        }
        
    }
    // for ( int i = 0; i < n; i++){
    //     for( int j = 0; j < m; j++){
    //         printf("%d ", v[i][j]);
    //     }
    //      printf("\n");
    // }
        
     int maxim = INT_MIN, nMax, mMax;
        for ( int i = 0; i < n; i++){
            for( int j = 0; j < m; j++){
            if ( v[i][j] >= maxim ){
                maxim = v[i][j];
                nMax = i;
                mMax = j;
            }
        }

    }
     printf("Maximul este: %d, i= %d, j= %d\n", maxim, nMax, mMax);


return 0;
}