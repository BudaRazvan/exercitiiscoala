#include <iostream>
#include <cmath>
using namespace std;


void radaciniEcuatie(int a, int b, int c)
{
    double delta = b * b - (4 * a * c);
    if (delta < 0)
    {
        cout << "Nu exista solutii" << endl;
    }
    else if (delta == 0)
    {
        double x = (double) -b / (2 * a);
        cout << "x: " << x << endl;
    }
    else
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        cout << "x1: " << x1 << ", x2: " << x2 << endl;
    }
}
int main()
{

    int a, b, c, maxim, minim, suma, produs, delta;
    cin >> a >> b >> c;
    maxim = a;
    minim = a;
    suma = a + b + c;
    produs = a * b * c;
    radaciniEcuatie(a, b, c);

    if (b > maxim)
    {
        maxim = b;
    }
    if (c > maxim)
    {
        maxim = c;
    }
    cout << "Maximul este " << maxim << endl;

    if (b < minim)
    {
        minim = b;
    }
    if (c < minim)
    {
        minim = c;
    }
    cout << "Minimul este " << minim << endl;

    cout << "Suma este " << suma << endl;
    cout << "Produsul este " << produs << endl;

    return 0;
}

