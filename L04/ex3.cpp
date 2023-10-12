#include<iostream>
using namespace std;
int main(){

    char caracter;
    cin >> caracter;
    if('0' <= caracter && caracter <= '9') { 
        cout << caracter << " este un caracter numeric ";
    } else { 
        cout << caracter << " este un operator matematic ";
    }



return 0;
}