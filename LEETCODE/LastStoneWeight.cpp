#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    vector<int> stones = {1,1};
    priority_queue<int,vector<int>> pq;
    for(int s:stones){
        pq.push(s);
    }
    while(pq.size()>1){
        int y= pq.top();
        pq.pop();
        int x=pq.top();
        pq.pop();
        if(x!=y){
            y=y-x;
            pq.push(y);
        }
    }
    cout<<(pq.empty() ? 0 : pq.top());
    return 0;
}
