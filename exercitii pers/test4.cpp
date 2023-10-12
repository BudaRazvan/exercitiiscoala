#include<iostream>
using namespace std;
int main(){

    // for(int i=0; i<=255; i++){
    //     cout<<(char)i<<" ";
    // }

    // char caracter;
    // cin>>caracter;
    // cout<<((char) (int)caracter - 32)<<endl;
    // cout<<((char) (int)caracter - 32 + 1)<<endl;
    // cout<<((char) (int)caracter - 32 - 1)<<endl;



    // int n;
    // cin >> n;
    // for(int i=0; i<=n; i++){
    //     cout<<i<< " ";
    // }


    

int main(){
int n, s;     //suma cifrelor unui numar
s = 0;
cin>>n;

    while(n!=0)
    { 
        s = s + n % 10;
        n = n / 10;
    } 
    cout<<s; 


int n, p;
p = 1;    //produsul cifrelor unui numar
cin >> p;
    while ( n ! = 0){
        p = p * (n % 10);
        n = n / 10;
    }
    cout << p;

return 0;
}