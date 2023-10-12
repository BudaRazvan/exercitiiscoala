#include<iostream>
using namespace std;
int main(){

    unsigned int n;
    cin>>n;
    for (int i = 1000; i<=9999; i++){
        if( i % n == 0){
            cout << i << " ";
        }
    }

return 0;
}