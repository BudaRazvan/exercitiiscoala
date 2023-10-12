#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d %d %d %d %d", a, b, c, d, e);
    printf("\n");

    for (int i = 1; i <= 8; i++) {
        printf("i = %d\n", i);
    }
    int j = 0;
    printf("\n");
    while (j < 10) {
        printf("j = %d\n", ++j);
    }


return 0;
}