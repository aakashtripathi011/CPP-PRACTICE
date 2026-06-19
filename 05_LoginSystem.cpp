#include <iostream>
using namespace std;

int main(){
    int attempts=3;
    while(attempts>0){
         string username;
    cout<<"Enter username: ";
    cin>>username;
    string password;
    cout<<"Enter password: ";
    cin>>password;
    if(username=="Admin" && password=="1234"){
        cout<<"login successful\n";
        return 0;
    }else{
        attempts--;
        cout<<"Invalid Credentials\n"<<"Attempts left:"<<attempts<<"\n";
    }
}
    cout<<"Account locked!\n";
    return 0;
}
