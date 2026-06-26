#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

int main(){
    unordered_map<string,int> map={{"serene",32},{"david",23}};
    
       // INSERTION
    map["charlie"]=45;     // using [] operator
    map.emplace("pika",12);     // using emplace() more effective
    map.insert(make_pair("kk",34));  // using insert

        // ACCESING VALUES
    cout<< "pika's age: "<<map["pika"]<<endl;
    cout<<"kk's age: "<<map.at("kk")<<endl;;

        // CHECKING IF A KEY EXIST
    string SearchKey ="charlie";
    if(map.find(SearchKey)!=map.end()){
        cout<< SearchKey << " found!" <<endl;
    }else{
        cout<<"not found"<<endl;
    }

        // c++20 shorthand method
    if(map.contains("kk")){
        cout<<"kk exists";
    }else{
        cout<<"kk do not exists";
    }

        // DELETION 
    map.erase("kk"); // kk deleted from map

        // ITERATION
    cout<<"\nRemining elements in map\n";
    for(const auto& [name, age]: map){
        cout<< name << "-" << age <<endl;
    }

     // two sum
     vector<int> v={2,7,11,15};
     int target=9;
     unordered_map<int,int> mymap;
     for(int i=0;i<v.size();i++){
        int need = target-v[i];
        if(mymap.contains(need)){
            cout<< i << "& " << mymap.at(need)<<endl;
        }
          mymap.emplace(v[i],i);
     }
   
        
          cout<<mymap.size();
    return 0;
}
