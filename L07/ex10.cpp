#include<stdio.h>
#include<cstdlib>
#include<limits.h>
using namespace std;

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    int **v = ( int ** )malloc(40 * sizeof(int*));
    for( int i = 0; i < 40; i++){
        v[i] = (int *)malloc(40 * sizeof(int));
    }

    for( int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &v[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++){ //diag principala triunghiul superior
        for( int j = 0; j < m; j++){
            if ( i < j){
                printf("%d ", v[i][j]);
            }
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++){ //diag principala triunghiul inferior
        for( int j = 0; j < m; j++){
            if ( i > j){
                printf("%d ", v[i][j]);
            }
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++){ //diag secundara triunghiul superior
        for( int j = 0; j < m; j++){
            if ( i + j < n -1 ){
                printf("%d ", v[i][j]);
            }
        }
    }
    printf("\n");
     for(int i = 0; i < n; i++){ //diag secundara triunghiul inferior
        for( int j = 0; j < m; j++){
            if ( i + j > n - 1 ){
                printf("%d ", v[i][j]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        free(v[i]);
    }
    free(v);


    

return 0;
}