#include<stdio.h>
#include<cstdlib>
using namespace std;

int main(){

    int n, m, v[40][40], s, i, j;
    scanf("%d %d", &n, &m);
    s = 0;

    for(int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            scanf("%d", &v[i][j]);
        }
    }
    printf("\n");

    char zona;
        printf("a. Zona 1(elem desupra diag princ/sec)\n");
        printf("b. Zona 2(elem deasupra diag princ si sub diag sec)\n");
        printf("c. Zona 3(elem sub diag princ/sec)\n");
        printf("d. Zona 4(elem sub diag princ si deasupra diag sec)\n");
    scanf("%s", &zona);

    switch(zona){
        case 'a':
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i < j && i + j < n - 1) {
                    s = s + v[i][j];
                }
            }
        }
        printf("%d", s);
        break;
    

        case 'b':
        for( int i = 0; i < n; i++){
            for( int j = 0; j < m; j++){
                if ( i < j && i + j < n - 1){
                    s = s + v[i][j];
                }
            }
        }
        printf("%d", s);
        break;



    }
    



return 0;
}