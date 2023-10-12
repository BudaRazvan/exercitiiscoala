#include<iostream>
using namespace std;
int main(){
    
    int n, p;
    cin>>n;

    p = 1;
    for( int i = 1; i<=n; i++){
        p = p * i;
    }   
    cout << p;
    

return 0;
}