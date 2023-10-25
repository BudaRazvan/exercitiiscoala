#include<stdio.h>
#include<cstdlib>
#include<limits.h>
using namespace std;

int main(){

int n, m;
scanf("%d %d", &n, &m);

    int **v = (int **)malloc(40 * sizeof(int *));
        for(int i = 0; i < n; i++){
            v[i] = (int *)malloc(40 * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &v[i][j]);
        }
    }

    int max = INT_MIN, iMax, jMax;
        for ( int i = 0; i < n; i++){
            for( int j = 0; j < m; j++){
                if( v[i][j] >= max ){
                    max = v[i][j];
                    iMax = i;
                    jMax = j;
                }
            }
        }
        printf("Maximul este: %d i= %d j= %d", max, iMax, jMax);

        for (int i = 0; i < 40; i++) { 
        free(v[i]);
    }
    free(v);





return 0;
}