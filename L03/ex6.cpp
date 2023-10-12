#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f, x;
    cin>>a>>b>>c>>d>>e>>f>>x;

    cout<<a*pow(x, 5)+b*pow(x, 4)+c*pow(x, 3)+d*pow(x, 2)+e*x+f<<endl;

    cout<<a*pow(15, 5)+b*pow(15, 4)+c*pow(15, 3)+d*pow(15, 2)+e*15+f<<endl;
    cout<<a*pow(20, 5)+b*pow(20, 4)+c*pow(20, 3)+d*pow(20, 2)+e*20+f<<endl;
    cout<<pow(a*pow(2, 5)+b*pow(2, 4)+c*pow(2, 3)+d*pow(2, 2)+e*2+f, a*pow(3, 5)+b*pow(3, 4)+c*pow(3, 3)+d*pow(3, 2)+e*3+f )<<endl;




}
