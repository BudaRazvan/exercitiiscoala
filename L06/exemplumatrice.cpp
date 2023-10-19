#include<iostream>
#include<stdio.h>
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
    
    printf("\n");

    for ( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            printf("%d ", v[i][j]);
        }
         printf("\n");
    }
        
    


return 0;
}