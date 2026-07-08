#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data =value;
        next=nullptr;
    }
};
    // printing Whole List
    void print(Node* head){
        while(head!=nullptr){
         cout<<head->data<<" ";
         head=head->next;
        }
        cout<<endl;
    }
    // Sum of Values Of All The Nodes
    int sumOfNodes(Node* head){
        int sum=0;
        while(head!=nullptr){
        sum+=head->data;
        head=head->next;
        }
        return sum;
    }
    // Counting Number Of Nodes
    int countNodes(Node* head){
        int count=0;
        while(head!=nullptr){
            count++;
            head=head->next;
        }
        return count;
    }
    // search for a Node
    bool searchNode(Node* head,int val){
       
        while(head!=nullptr){
          if(head->data==val){
             return true;
          }
          head=head->next;
        }
        return false;
        
    }
    // Max Value Node
    int maxValue(Node* head){
        int max=head->data;
        while(head!=nullptr){
        if(head->data>max){
            max=head->data;   
        }
        head=head->next;
    }
    return max;
}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);

    first->next=second;
    second->next=third;

    print(first);
    cout<<endl;
    cout<<sumOfNodes(first)<<endl;
    cout<<countNodes(first)<<endl;
    cout<<searchNode(first,10)<<endl;
    cout<<maxValue(first);
    return 0;
    

}
