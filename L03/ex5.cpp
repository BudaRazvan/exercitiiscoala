#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Cateta1 = "<<endl;
    cin>>a;
    cout<<"Cateta2 = "<<endl;
    cin>>b;
    cout<<"Ipotenuza = "<<endl;
    cin>>c;
    
    if(c*c==a*a+b*b){
        cout<<"Triunghiul este dreptunghic "<<endl;
    }
    else if(a == b && a == c && b == c){
        cout<<"Triunghiul este echilateral"<<endl;
    }
    else if(a == b || b == c || a == c){
        cout<<"Triunghiul este isoscel"<<endl;
    }
    else{
        cout<<"Triunghiul nu este dreptunghic"<<endl;
    }




return 0;
}