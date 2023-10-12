#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x, y, z;
    cin>>x>>y>>z;
    cout<<sqrt(x*x+y*y+z*z)<<endl;
    cout<<(x*log10(y*z))<<endl;
    
    int valAbs = abs(x-y-z);
    cout<<"|"<<x-y-z<<"| ="<<valAbs<<endl;

    
    cout<<x%y<<endl;
    
    float c =(float)x/z;
    cout<<c<<endl;



return 0;
}