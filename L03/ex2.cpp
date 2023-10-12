#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=++b;
    cout<<"a= "<<a<<" b= "<<b;
    a=b++;
    cout<<"a= "<<a<<" b= "<<b;
    a=--b;
    cout<<"a= "<<a<<" b= "<<b;
    a=b--;
    cout<<"a= "<<a<<" b= "<<b;

    b=++a;
    cout<<"a= "<<a<<" b= "<<b;
    b=a++;
    cout<<"a= "<<a<<" b= "<<b;
    b=--a;
    cout<<"a= "<<a<<" b= "<<b;
    b=a--;
    cout<<"a= "<<a<<" b= "<<b;


    cout<<a+10<<endl;
    cout<<b+10<<endl;
    cout<<a-10<<endl;
    cout<<b-10<<endl;
    cout<<a*10<<endl;
    cout<<b*10<<endl;
    cout<<a/10<<endl;
    cout<<b/10<<endl;


    cout<<a<<" "<<b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;

    float c = (float)a/b;
    cout<<setprecision(3)<<c<<endl;
    cout<<setprecision(5)<<c<<endl;
    cout<<setprecision(10)<<c<<endl;



    cout<<a*a*a-b*b-a*b+10<<endl;





    return 0;
}