#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int n;  //nr de 5 cifre, eliminare cifrei din mijloc.
    cin>>n;
    n = ( n/1000)*100+n%100;
    cout << n <<endl;



return 0;
}