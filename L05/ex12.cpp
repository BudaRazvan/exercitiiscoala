#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
int main(){

    srand (time(NULL));
    int n = rand()% (9999-5000 +1)+5000;
    int rasturnat=0;
    cout<<"Numarul generat este: "<<n<<endl;
    
    while(n>0){
    rasturnat=rasturnat * 10 + n % 10;
    n = n / 10;
    }
    cout<<"Rasturnatul numarului generat este: " <<rasturnat<<endl;

    


return 0;
}