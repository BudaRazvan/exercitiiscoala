#include<iostream>

using namespace std;
int main(){

    int nr, suma;
    printf("Introduceti un numar inttreg format din 4 cifre: ");
    scanf("%d", &nr);

    if ( nr < 1000 || nr > 9999 ){
        printf("Numarul introdus nu este format din 4 cifre: \n");
        return 1;
    }

    char optiune;
    printf("a. Afisare paritate ultima cifra \n");
    printf("b. Afisare paritte prma cifra \n");
    scanf("%s", &optiune);

    switch(optiune){
        case 'a':
        if ( nr % 2 == 0) {
            printf("Ultima cifra a numarului este para \n");
        }
        else {
            printf("Ultim cifra a numarului nu este para \n");
        }
        break;

        case 'b':
        if ( (nr / 1000) % 2 == 0){
            printf("Prima cifra a numarului este para \n");
        }
        else{
            printf("Prima cifra a numarului nu este para \n");
        }

        default:
                cout << "Optiune invalida.\n";
            break;
    }

        suma = 0;
            for (int i = 0; i < 4; ++i) {
                suma += nr % 10;
                nr /= 10;
            }
                printf("Suma cifrelor este: %d \n", suma);

        int cifraZero=0;
        cifraZero = (nr / 100) * 1000 + cifraZero*100 + (nr % 100);
            printf("Numarul dupa inserarea cifrei 0 la mijloc este: %d \n", cifraZero);



return 0;
}