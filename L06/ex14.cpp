#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

    int n, m, v[40][40];
    scanf("%d %d", &n, &m);

    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            scanf("%d", &v[i][j]);
        }
    }

    printf("\n\n");

    int minColoane = INT_MAX;
    for( int i = 0; i < m; i++){
        for ( int j = 0; j < n; j++){
            if( v[j][i] < minColoane ){
                minColoane = v[j][i];
            }
        }
    }

    int maxLinii = INT_MIN;
    for( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            if ( v[i][j] > maxLinii ){
                maxLinii = v[i][j];
            }
        }
    }
    printf("MinimColoane: %d, MinimLinii: %d", minColoane, maxLinii);


return 0;
}