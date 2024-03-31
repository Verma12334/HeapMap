#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string,int>m;
    //m["saurabh"]=4356; <= Not allowd
    m.insert(make_pair("saurabh",43546));
    m.insert(make_pair("saurabh",43546));
    m.insert(make_pair("saurabh",43546));
    m.insert(make_pair("saurabh",43546));
    m.insert(make_pair("saurabh",43546));

    for(auto p:m){
        cout<<p.first<<"-"<<p.second<<"\n";
    }

    cout<<"Count of saurabh key ="<<m.count("saurabh")<<endl;
    


}