#include <stdio.h>
using namespace std;
int main() {
    int n, v[40][40];
    
    scanf("%d", &n); //coloana cu coloana 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &v[i][j]);
        }
    }
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", v[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}