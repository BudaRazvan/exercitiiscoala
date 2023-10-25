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

    // for (int i = 0; i < m; i++) { //coloane
    //     int aux = v[0][i];
    //     v[0][i] = v[n-1][i];
    //     v[n-1][i] = aux;
    // }

    for (int i = 0; i < n; i++) {  //linii
        int aux = v[i][0];
        v[i][0] = v[i][m-1];
        v[i][m-1] = aux;
    }

    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    for( int i = 0; i < n; i++){
        free(v[i]);
    }
    free(v);

return 0;
}