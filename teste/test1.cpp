#include<stdio.h>
using namespace std;
int main(){

    
    int n, a[100];
    do{
        printf("n = (dati lungimea vectorului <= 100)");
        scanf("%d", &n);
    }
    while( n > 100 || n <= 0);
    for( int i = 0; i < n; ++i){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Elementele vectorului: ");
    for(int i = 0; i < n; ++i){
        printf("%d", a[i]);
    }printf("\n");

return 0;
}