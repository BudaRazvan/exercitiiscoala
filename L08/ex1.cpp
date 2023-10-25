#include<stdio.h>
using namespace std;

int main(){

    unsigned short n;
   
    scanf("%hu", &n);
    unsigned short m = 1; 
    m = m << 3;
    if ( (n & m) != 0){
        printf("1");
    }else{
        printf("0");
    }
    printf("\n");
    if( (n & 1) == 0 ){
        printf( "Numarul este par" );
    }else{
        printf( "Numarul este impar ");
    }
    printf("\n");
    
    m = 1;
    m = m << 2;
    m = ~m;
    unsigned short resetare = ( n & m );
    printf("Researe: ");
    printf(" %hu", resetare);

    m = 1;
    m = m << 4;
    unsigned setare = ( n | m);
    printf("\n");
    printf("Setare: ");
    printf(" %u", setare);



return 0;
}