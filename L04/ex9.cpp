#include<iostream>
using namespace std;
int main(){

    int a, b;
    cout<<"Introduceti doua numere intregi: ";
    cin >> a >> b;

    char optiune;
        cout << "Alegeti o optiune: " << endl;
        cout << "a. Suma" << endl;
        cout << "b. Produsul" << endl;
        cout << "c. Catul (a/b)" << endl;
        cout << "d. Restul (a mod b)" << endl;
        cout << "e. Iesire" << endl;
        cout << "Introduceti optiunea (a/b/c/d/e)" << endl;
        cin >> optiune;

    switch( optiune ){
        case 'a':
            cout << "Suma numerelor este "<< a+b << endl;
            break;
        
        case 'b':
            cout << "Produsul numerelor este "<< a*b << endl;
            break;

        case 'c':
            cout << "Catul numerelor este " << a/b << endl;
            break;

        case 'd':
            cout<< "Restul numerelor este " << a%b << endl;
            break;
        
        case 'e':
            cout<< "Ati iesit din meniu " <<endl;
        
        default:
                cout << "Optiune invalida.\n";
            break;
        
    }






return 0;
}