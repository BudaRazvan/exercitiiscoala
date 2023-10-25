#include <stdio.h>
#include <limits.h>

int main() {
    int n, v[30], AP[1000001] = {};

    scanf("%d", &n);
    int min = INT_MAX, max = INT_MIN;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
        AP[v[i]]++;
        if (v[i] < min) {
            min = v[i];
        }
        if (v[i] > max) {
            max = v[i];
        }
    }

    for (int i = min; i <= max; i++) {
        if (AP[i]) {
            printf("%d : %d\n", i, AP[i]);
        }
    }

    return 0;
}