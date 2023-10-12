#include<iostream>
using namespace std;
int main(){

    int a, b, c, d, e, maxim, minim;
    cin >> a >> b >> c >> d >> e;

    maxim = a;
    minim = a;


    if ( b > maxim ){
        maxim = b;
    }
    if ( c > maxim ){
        maxim = c;
    }
    if( d > maxim ){
        maxim = d;
    }
    if ( e > maxim ){
        maxim = e;
    }
    cout<< "Maximul este " << maxim <<endl;

    if ( b < minim ){
        minim= b;
    }
    if ( c < minim ){
        minim = c;
    }
    if( d < minim ){
        minim = d;
    }
    if ( e < minim ){
        minim = e;
    }
    cout<< "Minimul este " << minim <<endl;





return 0;
}