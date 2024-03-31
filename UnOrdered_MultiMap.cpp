#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_multimap<string,int>m;
    //m["saurabh"]=4356; <= Not allowd
    m.insert(make_pair("saurabh verma",43546));
    m.insert(make_pair("saurabhi",43546));
    m.insert(make_pair("saurabh",43546));
    m.insert(make_pair("saurabhi",43546));
    m.insert(make_pair("saurabh",43546));

    for(auto p:m){
        cout<<p.first<<"-"<<p.second<<"\n";
    }

    //auto a=m.equal_range("saurabh");

    cout<<"Count of saurabh key ="<<m.count("saurabh")<<endl;
    


}