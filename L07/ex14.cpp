#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

    int n, m;
    scanf("%d %d", &n, &m);


    int **v = (int **)malloc( 40 * sizeof(int *));
    for(int i = 0; i < 40; i++){
        v[i] = (int *)malloc( 40 * sizeof(int));
    }



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

    for( int i = 0; i < n; i++){
        free(v[i]);
    }
    free(v);


return 0;
}