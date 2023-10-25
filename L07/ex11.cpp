#include<cstdlib>
#include<limits.h>
#include<stdio.h>
using namespace std;

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    int **v = ( int **)malloc(40 * sizeof(int*));
    for( int i = 0; i < 40; i++){
        v[i] = (int *)malloc(40 * sizeof(int));
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &v[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", v[j][i]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++){
        free(v[i]);
    }
    free(v);





return 0;
}