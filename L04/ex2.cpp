#include<iostream>
using namespace std;
int main(){

    char caracter;
    cin>>caracter;
    cout<<(char) ((int)caracter - 32)<<endl;
    cout<<(char) ((int)caracter - 32 + 1)<<endl;
    cout<<(char) ((int)caracter - 32 - 1)<<endl;


return 0;
}