#include<iostream>
using namespace std;
int main(){
    
    string name;

    while(name.empty()){
        cout<<"enter your name: ";
        getline(std::cin, name);
        
    }
    cout<<"Buna ziua "<< name;
    






return 0;
}