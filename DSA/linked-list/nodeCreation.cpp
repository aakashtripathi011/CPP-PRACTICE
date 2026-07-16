#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
        
    }
};
int main(){
    Node* first=new Node(5);
    Node* second=new Node(6);
    first->next=second;
    cout<<"FIRST NODE DATA:"<<first->data<<endl;
    cout<<"Second Node Data:"<<first->next->data;
    
 
}
