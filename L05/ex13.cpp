#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;


int prim (int nr){
    if ( nr < 2 ){
        return 0;
    }else if( nr ==  2){
        return 1;
    }else if ( nr % 2 == 0 ){
        return 0;
    }
    for ( int i = 3; i * i <= nr; i += 2){
        if (nr % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

srand (time(NULL));
int n = rand()% (20-10 +1)+10;
int gasit=0;
cout <<"Numarul generat din intervalul [10,20] este:  "<< n << endl;

    int index = 2;
    while( gasit < n ){
        if( prim(index) == 1 ){
            gasit = gasit + 1;
            if ( gasit == n){
                cout << index << endl;
            }
        }
        index = index + 1;
    }
    



return 0;
}