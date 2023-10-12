#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    if( n % 2 == 0){
        cout<<n<< " este par\n";
    } else {
        cout<<n<< " este impar\n";
    }

    if ( n % 4 == 0){
        cout<<n<< " este divizibil cu 4\n";
    } else {
        cout<<n<< " nu este divizibil cu 4\n";
    }

    if ( n % 5 == 0){
        cout<<n<< " este divizibil cu 5\n";
        } else {
        cout<<n<< " nu este divizibil cu 5\n";
    }



return 0;
}