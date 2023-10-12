#include<iostream>
using namespace std;
int main(){

    unsigned int n, s, p;
    cin>>n;
    s = 0;
    p = 1;


    for( int i=1; i<=n; i++){
        s = s + i;
        p = p * i;
    
    } 
    cout<<"Suma primelor n numere: " << s<<endl;
    cout<<"Produsul primelor n numere: "<< p << endl;



return 0;
}