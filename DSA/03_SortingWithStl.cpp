#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> arr={50,20,10,40,30};
    // SORT DEFAULT
    sort(arr.begin(),arr.end());
    for(int x:arr){
        cout<<x<<endl;
    }
    cout<<endl;
    // SORT REVERSE
    reverse(arr.begin(),arr.end());
    for(int x:arr){
            cout<<x<<endl;
        }
        cout<<endl;
    // SORT DESCENDING
    sort(arr.begin(),arr.end(), greater<int>());
    for(int x:arr){
        cout<<x<<endl;
    }
    cout<<endl;
    // SORT MANUAL
    vector<int> array={-5, 3, -1, 8, -2};
    sort(array.begin(),array.end(),[](int a, int b){
        return abs(a)<abs(b);
    });
    for(int x:array){
        cout<<x<<endl;
    }
    return 0;
}

