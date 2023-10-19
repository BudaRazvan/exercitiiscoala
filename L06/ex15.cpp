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


return 0;
}