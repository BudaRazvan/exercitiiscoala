#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x;
    cout<<"Numar intreg = ";
    cin>>x;
    double y, z;
    cout<<"Numar real = ";
    cin>>y>>z;

    cout<<(y==2.0)<<endl;
    cout<<(z!=5.0)<<endl;
    cout<<(y>2)<<endl<<(z<=5.5)<<endl;
    cout<<(y>0)<<endl<<(z>0)<<endl;

    cout<<y*y*y-z*z-y*z+10<<endl;
    cout<< pow(y,z)<<endl;
    cout<<y/z<<endl;

    
    cout<<(int)y%(int)z<<endl;



return 0;
}