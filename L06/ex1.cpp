#include<stdio.h>
#include<iostream>
using namespace std;


    void maximMinim(int n, int v[]){
        int maxim = v[1];
        int minim = v[1];
        for( int i = 1; i <= n; i++){
            if ( v[i] > maxim ){
                maxim = v[i];
            }
            if( v[i] < minim ){
                minim = v[i];
            }
        }
        printf("Maximul elementelor: %d, Minimul elementelor: %d\n", maxim, minim);
    }

    void sumProd( int n, int v[]){
        int sum = 0;
        int prod = 1;
        for ( int i = 1; i <= n; i++){
            sum = sum + v[i];
            prod = prod * v[i];
        }
        printf("Suma numerelor: %d, Produsul numerelor: %d\n", sum, prod);
    }

    void eliminare( int &n, int v[], int k){
        for( int i = k; i < n; i++){
            v[i] = v[ i - 1 ];
        }
    n--;
        
    }

    void inserare( int &n, int v[], int k, int y){
        for( int i = n; i < k; i-- ){
            v[i] = v[ i - 1 ];
        }
    n++;
    v[k] = y;
    }

    void afisare(int n, int v[]) {
        for (int i = 1; i <= n; i++) {
        printf("%d ", v[i]);
    }
   
}

    void permutareStanga( int n, int v[]){
        int 
    }

    void permutareDreapta ( int n, int v[]){
        int 

    }






int main(){
    int n, v[20];
    scanf("%d", &n);

    for ( int i = 1; i <= n; i++){
    scanf("%d", &v[i]);
    }

    maximMinim(n, v);
    sumProd(n, v);
    afisare(n, v);

   
return 0;
}