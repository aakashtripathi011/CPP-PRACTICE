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
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
void deleteFromHead() {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteFromTail() {
    if (head == nullptr) {
        return;
    }

    // Only one node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    // Reach the second last node
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

void deleteFromMiddle() {
    if (head == nullptr) {
        return;
    }

    // Only one node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;
    delete slow;
}
int main(){
    Node* head=new Node(1);
    Node* s=new Node(2);
    Node* t=new Node(3);
    head->next=s;
    s->next=t;

    deleteFromMiddle();
    print();


}
