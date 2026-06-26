#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    priority_queue<int> pq;  // DEFAULT- MAX HEAP (sbse bada pehle)
    pq.push(10);
    pq.push(0);
    pq.push(50);
    cout<<pq.top()<<endl;
    cout<<"\n";

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    cout<<"\n";
    priority_queue<int, vector<int> , greater<int>()> prq;
    prq.push(20);
    prq.push(10);
    prq.push(30);
    
    while(!prq.empty()){
        cout<<prq.top()<<endl;
        prq.pop();
    }

}
