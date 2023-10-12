#include<iostream>
using namespace std;
int main(){

    int age;
    cout<< "Enter your age: ";
    cin>>age;

    if( age >= 18){
        cout<< "Welcome to the site !";
    } 
    else if( age < 0){
        cout<< "Vezi ca nu te-ai nascut bosulica";
    }
    else{
        cout<<"You're under aged !";
    }
return 0;
}