#include <iostream>
using namespace std;
int main()
{
    // int a, b, s, d, p, c;
    // cin>>a>>b;
    // s=a+b;
    // d=a-b;
    // p=a*b;
    // c=a/b;
    
    // cout<<s<<" "<<d<<" "<<p<<" "<<c;
    

   
    int n, s=0;
    cin>>n;
    
    while( n!=0 ){
        s = s + n % 10;
        n = n / 10;
    }
    cout << s;
    
    

    
    
return 0;
}
 