#include<iostream>
using namespace std;
int main(){

    int luna;
    cout<<"Introduceti luna (1-12): ";
    cin>>luna;

    switch (luna){
    case 1:
        cout<<"Este luna Ianuarie";
        break;
    case 2:
        cout<<"Este luna Februarie";
        break;
    case 3:
        cout<<"Este luna Martie";
        break;
    case 4:
        cout<<"Este luna Aprilie";
        break;
    case 5:
        cout<<"Este luna Mai";
        break;
    case 6:
        cout<<"Este luna Iunie";
        break;
    case 7:
        cout<<"Este luna Iulie";
        break;
    case 8:
        cout<<"Este luna August";
        break;
    case 9:
        cout<<"Este luna Septembrie";
        break;
    case 10:
        cout<<"Este luna Octombire";
        break;
    case 11:
        cout<<"Este luna Noiembrie";
        break;
    case 12:
        cout<<"Este luna Decembrie";
        break;
    default:
        cout<<"Introduceti doar numerele (1-12)";
        break;
    }

return 0;
}