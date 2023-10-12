#include<iostream>
using namespace std;
int main(){

    int n, m, p;
    cin>>n>>m;     //n la puterea m, fara utilizarea functiei math.h
    p = 1;

    for( int i = 1; i<=m; i++){
        p = p * n;
    }
    cout << p;

return 0;
}