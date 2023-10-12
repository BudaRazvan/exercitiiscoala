#include<iostream>
using namespace std;
int main(){


    
    for( int i=0; i<=255; i++ ){  //toate caracterele din ASCII(0.255)
        cout<<(char)i<<" ";
    }

    char caracter; //codul ASCII al caracterelor(citesti de la tastatura)
    unsigned valoare;
    cin>>caracter;
    valoare=caracter;
    cout<<valoare;



    char caracter;  // caracterul majuscula, caracterul urm si precedent
    cin>>caracter;
    cout<<((char) (int)caracter - 32)<<endl;
    cout<<((char) (int)caracter - 32 + 1)<<endl;
    cout<<((char) (int)caracter - 32 - 1)<<endl;

return 0;
}