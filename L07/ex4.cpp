#include <stdio.h>
#include <limits.h>
#include<cstdlib>

int *multime = (int*)malloc(1000001*sizeof(int));


int main() {
    int n;
    int *v=(int*)malloc(40*sizeof(int));
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
        if (multime[i]) {
            printf("%d ", i);
        }
    }
    free(v);
    free(multime);

    return 0;
}