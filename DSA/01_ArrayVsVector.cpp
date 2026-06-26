#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    arr.insert(arr.begin(),5); //o(n)

    arr.push_back(40); // o(1)

    arr.pop_back();

    // EFFICIENT
    for(int x :arr){
        cout<<x<<"\n";
    }
    cout<<"\n";
    
    // LOOP TRANSVERSE
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\n";
    }

    // REVERSE
    cout<<"\n";
    for(int j=arr.size()-1;j>=0;j--){
        cout<<arr[j]<<"\n";
    }
    return 0;
}
