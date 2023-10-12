#include<iostream>
using namespace std;
int main(){

    int n, suma;
    suma = 0 ;
    cout<<"Introduceti un numar din intervalul[0, 100000]: "<<endl;
    cin>>n;

    for( int i=0; i <= 100000; ++i){
        suma = suma + n % 10; 
        n = n / 10;
    }
    cout<<"Suma cifrelor este: "<< suma<<endl;


return 0;
}