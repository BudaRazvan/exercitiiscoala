#include<stdio.h>
#include<cstdlib>
using namespace std;
int main(){

    int n, x;
    scanf("%d", &n);
    int *v=(int*)malloc(40*sizeof(int));

    for( int i = 1; i <= n; i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);

    int nr = 0;
    for(int i = 1; i <= n; i++)
        if(v[i] == x) { 
            nr++;
        }
    printf("afisare %d", nr);

    free(v);

return 0;
}