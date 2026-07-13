#include <iostream>
#include <climits>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;

    Node(int value){
        data=value;
        right=nullptr;
        left=nullptr;
    }
};

    // InOrder 
    void inorder(Node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

    bool isValid(Node* root,long min,long max){
        if(root==nullptr) return true;

        if(root->data<=min || root->data>=max){
            return false;
        }

        return isValid(root->left,min,root->data) &&
               isValid(root->right,root->data,max);
    }

int main(){
    Node* root=new Node(10);
    root->right=new Node(20);
    root->left=new Node(5);
    root->left->left=new Node(2);
    root->left->right=new Node(7);

    inorder(root);
    cout<<endl;
    cout<<isValid(root,LONG_MIN,LONG_MAX);

}
