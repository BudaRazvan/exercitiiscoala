#include <stdio.h>
#include <cstdlib>
#include <ctime>

int genRandomNumber() {
    return rand() % 41;
}

int main() {
    srand(time(0));
    
    int n, v[40][40];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int r = genRandomNumber();
            v[i][j] = r;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf("%d ", v[j][i]);
        }
    }

    return 0;
}