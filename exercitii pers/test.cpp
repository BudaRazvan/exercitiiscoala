#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n != 0) // cat timp n este nenul - mai are cifre
    {
        int uc = n % 10; //determinam ultima cifra a lui n
        cout << uc << " "; // prelucram ultima cifra
        n /= 10;    //  eliminam ultima cifra (trunchiem numarul)
    }
    return 0;
}