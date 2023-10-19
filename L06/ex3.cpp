#include<stdio.h>
using namespace std;
int main(){

    int n, v[30], x;
    scanf("%d", &n);
    for( int i = 1; i <= n; i++){
        scanf("%d", &v[]);
    }
    scanf("%d", x);

    int nr = 0;
    for(int i = 1; i <= n; i++)
        if(v[i] == x) { 
            nr++;
        }
    printf("afisare %d", nr);


return 0;
}