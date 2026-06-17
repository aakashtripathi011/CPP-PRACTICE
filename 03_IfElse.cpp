#include<iostream>
using namespace std;

int main(){
    int marks,attendence;
    cout<<"marks is: ";
    cin>>marks;
    cout<<"attendence is: ";
    cin>>attendence;
    if(attendence<75){
        cout<<"not eligible\n";
    }else if(marks>90){
        cout<<"Grade: A\n";
    }else if(marks>80){
        cout<<"Grade: B\n";
    }else if(marks>70){
        cout<<"Grade: C\n";
    }else {
        cout<<"Grade: D\n";
    }
    return 0;

}
