#include<stdio.h>
#include<cstdlib>
#include<limits.h>
using namespace std;

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    int **v = (int **)malloc( 40 * sizeof(int *));
    for(int i = 0; i < 40; i++){
        v[i] = (int *)malloc( 40 * sizeof(int));
    }

    for( int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &v[i][j]);
        }
    }
    printf("\n");


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%d", v[i][j]);
            }
        }
        printf("\n");
    }

    for( int i = 0; i < n; i++){
        free(v[i]);
    }
    free(v);

return 0;
}