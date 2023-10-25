#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);
    int *v=(int*)malloc(40*sizeof(int));
    int x = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        if (v[i] != v[n - i - 1]) {
            x = 1;
            printf("Nu este simetric\n");
            break;  
        }
    }

    if (x == 0) {
        printf("Este simetric\n");
    }


return 0;
}