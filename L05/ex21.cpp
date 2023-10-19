#include <stdio.h>

using namespace std;

struct money {
    int valoareBancnota;
    int numarBancnoteFolosite;
};

int main() {
    money v[4];
    v[0].valoareBancnota = 100, v[0].numarBancnoteFolosite = 0;
    v[1].valoareBancnota = 50, v[1].numarBancnoteFolosite = 0;
    v[2].valoareBancnota = 10, v[2].numarBancnoteFolosite = 0;
    v[3].valoareBancnota = 5, v[3].numarBancnoteFolosite = 0;

    int suma;
    scanf("%d", &suma);

    for (int i = 0; i < 4; i++) {
        while (suma >= v[i].valoareBancnota) {
            suma -= v[i].valoareBancnota;
            v[i].numarBancnoteFolosite++;
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("Valoare bancnota = %d -> Numar bancnote folosite = %d\n", v[i].valoareBancnota, v[i].numarBancnoteFolosite);
    }

    return 0;
}