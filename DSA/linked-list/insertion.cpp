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

Node* head=nullptr;

void print(){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void insertAtHead(int val){
    Node* newNode=new Node(val);
    newNode->data=val;
    newNode->next=head;
    head=newNode;
}
void insertAtTail(int val){
    Node* newNode=new Node(val);
    Node* temp=head;

    if(head==nullptr){
        head=newNode;
        return;
    }

    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;

}
void insertAtMiddle(int val){
    Node* newNode=new Node(val);

    if(head==nullptr){
        head=newNode;
        return;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr ){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* temp=slow->next;
    slow->next=newNode;
    newNode->next=temp;

}

int main(){
    insertAtHead(1);
    insertAtTail(2);
    insertAtTail(3);
    insertAtMiddle(4);
    print();
   

}
