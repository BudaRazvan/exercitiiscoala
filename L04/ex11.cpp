#include<iostream>
#include<cmath>
using namespace std;

    void radaciniEcuatie(int a, int b, int c)
    {
        int delta = b * b - (4 * a * c);
        double x1;
        double x2;

        if ( delta < 0){
            cout << "Ecuatia nu are solutii" << endl;
        } 
        else if( delta == 0){
            double x = (double) -b / (2 * a);
            cout << "x: " << x << endl;
        }
        else if(delta >0){
             x1 = (-b + sqrt (delta)) / (2 * a);
             x2 = (-b - sqrt (delta)) / (2 * a);
             cout << "Solutiile ecuatiei de gradul II sunt: \n" << "x1: " << x1 << ", x2: " << x2 << endl;
        }
            
    }


int main(){

    int a, b, c, maxim, minim, delta, x, x1, x2;
    cout << "Introduceti trei numere intregi: " << endl;
    cin >> a >> b >> c;
    maxim = a;
    minim = a;
    radaciniEcuatie(a, b, c);

    char optiune;
        cout << "a. Afisare maxim " << endl;
        cout << "b. Afisare minim " << endl;
        cout << "c. Afisare suma "<< endl;
        cout << "d. Afisare produs " << endl;
        cout << "e. Afisarea solutiilor ec de gr 2 " << endl;
        cout << "Introduceti optiunea (a/b/c/d/e)" << endl;
        cin >> optiune;

    switch(optiune){

        case 'a':
            if ( b > maxim ){
                maxim = b;
            }
            if ( c > maxim ){
                maxim = c;
            }
        cout << "Maximul numerelor este: " << maxim << endl;
            break;

        case 'b':
            if ( b < minim ){
                minim = b;
            }
            if ( c < minim ){
                minim = c;
            }
        cout << "Minimul numerelor este: " << minim << endl;
            break;

        case 'c':
            cout << "Suma numerelor este: " << a+b+c << endl;
            break;

        case 'd':
            cout << "Produsul numerelor este: " << a*b*c << endl;
            break;

        case 'e':
            cout << "Solutiile ecuatiei de gradul II sunt: \n" << "x1: " << x1 << ", x2: " << x2 << endl;
            
            break;
    }

return 0;
}
