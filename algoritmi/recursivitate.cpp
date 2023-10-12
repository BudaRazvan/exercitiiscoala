#include<stdio.h>

int recursiv(int n){
    printf("ne n ori in ordine, n=%d\n", n);
    if ( n== 1) {
        //caz trivial
        printf("se exec. odata, n=%d\n", n);
        return 0;
    } else {
        printf("de n-1 ori in ordine, n=%d\n", n);
        recursiv(n-1);
        printf("de n-1 ori in ordine inversa, n=%d\n", n);
    }
    printf("de n-1 ori in ordine inversa, n=%d\n", n);
}

int main(){
    recursiv(5);

return 0;
}