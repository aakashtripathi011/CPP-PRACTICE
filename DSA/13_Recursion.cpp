#include<iostream>
#include<vector>
using namespace std;

void CountUp(int n){
    if(n<=0) return;
    CountUp(n-1); // stack unwinding coming up
    cout<<n;
}
void CountDown(int n){
    if(n<=0) return;
    cout<<n;   // print before call
    CountDown(n-1);
}
int Factorial(int n){
    if(n<=0) return 1;
    return n*Factorial(n-1);
    
}
void reverse(const vector<int> &arr ,int i){
    int n=arr.size();
    if(i==n) return ;
    reverse(arr,i+1);
    cout<<arr[i]<<endl;
}
int Fabaroni(int n){
    if(n<=0) return 0;
    if(n==1) return 1;
    return Fabaroni(n-1)+Fabaroni(n-2);
}
int main(){
    CountUp(5);
    cout<<endl;
    CountDown(5);
    cout<<endl;
    cout<<Factorial(5);
    cout<<endl;
    vector<int> arr={10,20,30,40};
    reverse(arr,0);
    cout<<endl;
    cout<<Fabaroni(4);
}
