#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int k;
    cout<<"Enter k:";   // k input 
    cin>>k;
    vector<int> nums ={3,2,1,5,6,4};  // vector formed 
    priority_queue<int,vector<int>> pq;    // default max heap
    for(int s:nums){    // values pushed 
        pq.push(s);
    }
    for(int i=0;i<k-1;i++){   // pop as required
        pq.pop();
    }
    
    cout<<"Second Largest Element: "<<pq.top();
}
