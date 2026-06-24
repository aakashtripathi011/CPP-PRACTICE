#include<iostream>
#include<utility>
#include <vector>
using namespace std;

int main(){
    // MAKE PAIR
    pair<int,string> t=make_pair(2,"serene");
    cout<<t.first<<" "<<t.second<<endl;

    // VECTORS
   vector<pair<int,string>> students;
   students.push_back({1,"serene"});
   students.push_back({2,"james"});
   for(auto s:students){
    cout<<s.first<<"-"<<s.second<<endl;
   }

   // TUPLE
   tuple<int,string,double> record={1,"Mira",9.8};
   cout<<get<0>(record)<<"-"<<get<1>(record)<<"-"<<get<2>(record);
   return 0;


}
