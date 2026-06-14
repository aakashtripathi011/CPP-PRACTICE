#include <iostream>

int main(){

// print pattern
    std::cout<<"hello world"<<std::endl;
    std::cout<<"hello"<<std::endl;
    std::cout<<"AAKASH\n";

// variable
    int age;
    std::cout<<"Enter age: ";
    std::cin>>age;
    std::cout<<"Your age is: "<<age<<"\n";

// chaining
    int roll=14;
    int marks=55;
    std::cout<<"My roll no. is "<<roll<<"\n";
    std::cout<< "marks: "<<marks<<"\n";

// char
    char ch='z';
    ch++;
    std::cout<<"char is: "<<ch<<"\n";
    //
    char CH='A';
    CH++;
    std::cout<<CH<<"\n";
    //
    char num='0';
    std::cout<<num+num;
    return 0;
}
