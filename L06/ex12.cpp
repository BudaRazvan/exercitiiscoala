#include<stdio.h>
using namespace std;
int main(){

    int n, m, v[40][40];
    scanf("%d %d", &n, &m);

    for ( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
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



return 0;
}