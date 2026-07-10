#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data=value;
        left=nullptr;
        right=nullptr;
    }
};
void inOrder(Node* root){
    // Base Case
    if(root==nullptr) return;

    // Left Subtree
    inOrder(root->left);

    // Main Node
    cout<<root->data<<endl;

    // Right Subtree
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root==nullptr) return;
    cout<<root->data<<endl;
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root==nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<endl;
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(12);
    root->left->left=new Node(3);
    inOrder(root);
    preOrder(root);
    postOrder(root);
}
