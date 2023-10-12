#include<iostream>
using namespace std;
int main(){

    int n, m;
    cin>>n>>m;

    for( int i = 10000; i<=99999; i++){
        if ( i%n == 0 && i%m == 0){
            cout<< i <<endl;
        }
    }

return 0;
}