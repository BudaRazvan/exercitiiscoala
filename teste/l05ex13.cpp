#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;

    int prim ( int nr ){
        if ( nr < 2 ){
            return 0;
        }else if ( nr == 2){
            return 1;
        }else if (nr % 2 == 0 ){
            return 0;
        }
        for( int i = 3; i * i <= nr; i += 2){
            if( nr % i == 0 ){
                return 0;
            }
        }
        return 1;
    }

    int main(){

    srand(time(0));
    int n = rand() % (20-10+1) + 10;
    printf("Numarul generat este: %d", n);
    int gasit = 0;

    int index = 2;
    while( gasit < n ){
        if ( prim(index) == 1 ){
            gasit += 1;
        }
        if( gasit == n ){
            printf("%d\n", index);
        }
    }
    index = index + 1;

    return 0;
    }