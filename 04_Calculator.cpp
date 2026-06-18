#include<iostream>
using namespace std;

class Calculator{
public:
double add(double a, double b){
    return a+b;
}
double subtract(double a , double b){
    return a-b;
}
double divide(double a , double b){
    if(b!=0){
    return a/b;
    }else{
        cout<<"invalid input"<<"\n";
        return 0;
    }
}
double multiply(double a , double b){
    return a*b;
}
};
int main(){
    
while(true){
    
    Calculator calc;
    int choice;
    cout<<"1.add\n";
    cout<<"2.subtract\n";
    cout<<"3.divide\n";
    cout<<"4.multiply\n";
    cout<<"5.Exit \n";
    cout<<"Enter Choice: \n";

    cin>> choice;
     if(choice==5){
        break;
    }
    double a;
    cout<<"Enter First no.: ";
    cin>>a;
    double b;
    cout<<"Enter Second no.: ";
    cin>>b;

switch(choice){
    case 1:
    cout<<calc.add(a,b);
    break;

    case 2:
    cout<<calc.subtract(a,b);
    break;

    case 3:
    cout<<calc.divide(a,b);
    break;

    case 4:
    cout<<calc.multiply(a,b);
    break;
    
    
    
    default:
    cout<<"invalid choice\n";
    

}
}
return 0;
    
}
