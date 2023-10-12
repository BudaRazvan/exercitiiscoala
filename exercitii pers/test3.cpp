#include<iostream>
#include<cmath>
using namespace std;


void radaciniEcuatie(int a, int b, int c){
    double delta = -b * (4 * a * c);
    if ( delta < 0){
        cout<<"Ecuatia nu are solutii ";
    }
    if( delta == 0){
        double x = -b / ( 2 * a );
        cout << "x: " << x << endl;
    }
    else{
        double x1 = (-b + sqrt(delta)) / ( 2*a );
        double x2 = (-b - sqrt(delta)) / ( 2*a );
        cout << " x1: " << x1 << " x2: " << x2 << endl;
    }
}








int main(){

    int a, b, c, maxim, minim, suma, produs, delta;
    cout<<"Introduceti 3 numere intregi: " << endl;
    cin >> a >> b >> c;
    maxim = a;
    minim = a;
    suma = 0; 
    produs = 1;
    radaciniEcuatie(a, b, c);

    char optiune;
        cout<<"a. Afisare maxim "<<endl;
        cout<<"b. Afisare minim "<<endl;
        cout<<"c. Afisare suma "<<endl;
        cout<<"d. Afisare produs "<<endl;
        cout<<"e. Iesire meniu "<<endl;
        cin>> optiune;

    switch(optiune){
        case 'a':
            if( b > maxim ){
                maxim = b;
            }
            if( c > maxim ){
                maxim = c;
            }
            cout <<"Maximul numerelor este "<< maxim<<endl;
            
        break;

        case 'b':
            if ( b < minim ){
                minim = b;
            }
            if ( c < minim ){
                minim = c;
            }
            cout <<"Minimul numerelor este: "<< minim<<endl;
        break;

        case 'c':
            suma = a + b + c;
            cout<<"Suma numerelor este: "<< suma<<endl;
        break;

        case 'd':
            produs = a * b * c;
            cout<<"Produsul numerelor este: "<< produs<<endl;
        break;

        case 'e':
            cout<<"Ati iesit din meniu "<<endl;
        break;







    }
return 0;
}