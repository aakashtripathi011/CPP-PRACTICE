#include<iostream>
using namespace std;

  void update(int &x){
        x=100;
     }

   void swap(int &a , int &b){
    int temp=a;
    a=b;
    b=temp;
   }

   struct Node{
    int data;
    Node* next;
   };

int main(){
    int x=8;
    int* p= &x;
    cout<< p <<endl;  // x ka adress print hoga
    cout<< *p <<endl;  // x ki value print hogi  (Derefrencing)

    *p =100;  // derefrencing se value 100 kardi..
    cout<<x<<endl;

    int* q = nullptr;   // q points to nothing 
    cout<< q << endl;
    // cout<< *q<<endl; // segmentation error



     int a=5;
     update(a); // x and a same adress
     cout<<a<<endl;

     int m=5 , n=10;
     swap(m,n);
     cout<<m << " " << n<<endl;

cout<<endl;
     // POINTER ARITHIMATIC
     int arr[5]={10,20,30,40,50};
     cout<<arr<<endl;  // pehle element ka adress deta hai
     cout<<&arr[0]<<endl;  // pehle element ka adress deta hai

     cout<<arr+1<<endl; // second element ka adress (+1 means one integer ka fark = 4 bits)
     cout<<&arr[1]<<endl; // second element ka adress

     int* k=arr;
     for(int i=0;i<5;i++){
        cout<<*(k+i)<<" ";
     }cout<<"\n";
      
     // POINTERS TO STRUCTS/OBJECT
     Node n1;
     n1.data=10;
     n1.next=nullptr;

     Node* nodeptr=&n1;
      cout<<(*nodeptr).data<<endl;
      cout<<nodeptr->data<<endl;

      // DOUBLE POINTER
      int var=55;
      int* P=&var;
      int** PP=&P;
      cout<<PP<<endl; // p ka address batata hai 
      cout<<*PP<<endl; // p ki value jo ki khud ek adress hain
      cout<<**PP<<endl; // two times dereferance (var ki value)
      
}
