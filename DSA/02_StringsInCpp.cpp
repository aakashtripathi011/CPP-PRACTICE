#include<iostream>
#include<string>
using namespace std;

int main(){
    string first="aakash";
    string last="tripathi";

    // CATENATION
    string str=first + " " + last;
    cout<<str<<"\n";
    cout<<str.size()<<"\n";
    cout<<str[0]<<"\n";

    // SUBSTRING
    cout<<str.substr(2,4)<<"\n"; // 2=start index , 4=length

    // REVERSE STRING
    string rev;
    for(int i=str.size()-1; i>=0;i--){
        rev=rev+str[i];
        
    }
    cout<<rev<<endl;

    // FIND
    int pos=str.find("pika");
    if(pos==string::npos){
        cout<<"not found\n";
    }
    cout<<pos<<endl;

    // COMPARISION
    string a="PIKACHU";
    string b="pikachu";
    if(a==b){
        cout<<"same\n";
    }else{
        cout<<"different";
    }
    
    return 0;
}
