#include<iostream>
using namespace std;
int main(){
    
    
	// int nr;
    // cout<<"Introduceti numarul: ";
    // cin>>nr;
    
    // if(nr!=0){
    //     cout<<nr<<'\n';
    //     cout<<"Bravo";
    // }
    // else if(nr == 0){
    //     cout<<"Introduceti un numar diferit de 0: ";
    //     cin>>nr;
    //     cout<<"Bravo";
    // }
   
    int nr;
    printf("Introduceti numarul: ");
    scanf("%d", &nr);

    if( nr !=0){
        printf("%d", nr);
        printf(" Bravo\n");
    }
    else if( nr == 0 ){
        printf("Introduceti un numar diferit de 0: ");
        scanf("%d", &nr);
        printf("Bravo");
    }

    
   
         

    
    
   
return 0;   
}