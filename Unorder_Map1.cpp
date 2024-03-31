#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>
int main(){
    //creation 
    unordered_map<string,int>m;

    //insertaion
    //1
    pair<string,int>p=make_pair("saurabh",4);
    m.insert(p);

    //2
    pair<string,int>pair2("love",2);
    m.insert(pair2);

    //3
    m["mera"]=1;

    //what will happen
    m["mera"]=6;

    //serach
    cout<<m["mera"]<<endl;
    cout<<m.at("mera")<<endl;



    //cout<<m.at("mer")<<endl;
    //cout<<m["mer"]<<endl;
    
    cout<<m["mer"]<<endl;
    cout<<m.at("mer")<<endl;
    cout<<m.size()<<endl;  

    //to check present

    cout<<m.count("love")<<endl;
    cout<<m.count("saurabh")<<endl;

    //erase
    m.erase("mera");

    cout<<m.size()<<endl;  

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //iterator
    unordered_map<string,int>::iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
  
    
}//T.C.=O(1)