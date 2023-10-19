#include<iostream>
using namespace std;



int main(){
    int s, p, x, c, i;

    for(i = 1; i <= 9999; i++){
       x = i;
       s = 0; 
       p = 1;

       while ( x != 0 ){
        c = x % 10; 
        s = s + c;
        p = p * c;
        x = x / 10;
       }
       if( p != 0 )
       if( i % s == 0 && i % p == 0){
        printf("%d", i);
       }
       return 0;
}
}