#include<stdio.h>
using namespace std;
int main(){

    int n, i, x=1, j;
        printf("n= ");
        scanf("%d", &n);
    for( i = 1; i <= n; ++i){
        for( j = x; j <= x + i -1; ++j){
            printf("%d ", j);
        }
            x=j;
            printf("\n");
        }

    return 0;
    }
