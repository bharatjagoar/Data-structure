#include<iostream>
using namespace std;
#include<map>
int main(){
    map <int,string> hashmap;
    hashmap[1] = "bharat";
    hashmap[2] = "jagoar";
    hashmap[3] = "creta";
    for(auto x:hashmap){
        cout<<x.second<<endl;
    }
    cout<<endl;
    hashmap.insert({221,"bheem"});
    for(auto x:hashmap){
        cout<<x.second<<endl;
    }
    cout<<hashmap.count(221)<<endl;
    hashmap.erase(221);
    cout<<hashmap.count(221)<<endl;
    cout<<endl<<endl<<endl;
    auto it = hashmap.find(3);
    cout<<(*it).second<<endl;
    return 0;
}