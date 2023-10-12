#include <iostream>
using namespace std;


int main() {
    int numar;

    
    cout << "Introduceti un numar intreg de 4 cifre: ";
    cin >> numar;

    
    if (numar < 1000 || numar > 9999) {
        cout << "Numarul introdus nu are 4 cifre.\n";
        return 1;
    }

    char optiune;
        cout << "Alegeti o optiune:\n";
        cout << "a. Afisare paritate ultima cifra\n";
        cout << "b. Afisare paritate prima cifra\n";
        cout << "c. Afisare suma cifrelor\n";
        cout << "d. Afisare numar rezultat dupa inserarea cifrei 0 la mijlocul numarului\n";
        cout << "Introduceti optiunea (a/b/c/d): ";
        cin >> optiune;

    switch (optiune) {
        case 'a':
            if (numar % 10 == 0) {
                cout << "Ultima cifra este para.\n";
            } else {
                cout << "Ultima cifra este impara.\n";
            }
            break;

        case 'b':
            if (numar / 1000 % 2 == 0) {
                cout << "Prima cifra este para.\n";
            } else {
                cout << "Prima cifra este impara.\n";
            }
            break;

        case 'c':
            int suma = 0;
            for (int i = 0; i < 4; ++i) {
                suma += numar % 10;
                numar /= 10;
            }
                cout << "Suma cifrelor este: " << suma << "\n";
            break;

        case 'd':
            int cifraZero = numar / 1000 * 10000 + 0 * 1000 + numar % 1000;
                cout << "Numarul dupa inserarea cifrei 0 la mijloc este: " << cifraZero << "\n";
            break;

        default:
                cout << "Optiune invalida.\n";
            break;
    }

    return 0;
}
