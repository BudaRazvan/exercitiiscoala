#include <stdio.h>
#include <limits.h>

int multime[1000001];

int main() {
    int n, v[30];

    scanf("%d", &n);
    int min = INT_MAX, max = INT_MIN;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
        multime[v[i]] = 1;
        if (v[i] < min) {
            min = v[i];
        }
        if (v[i] > max) {
            max = v[i];
        }
    }

    for (int i = min; i <= max; i++) {
        if (multime[i] != 0 ) {
            printf("%d ", i);
        }
    }

    return 0;
}