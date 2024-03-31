#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,string>record;
    record.insert(make_pair(2344,"saruabhi"));
    record.insert(make_pair(2345,"saruabh"));
    record[44567]="sejal verma";

    for(auto pair:record){
        cout<<pair.first<<"-"<<pair.second<<"\n";
    }
}