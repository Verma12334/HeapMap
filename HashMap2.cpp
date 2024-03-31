#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>m1;

    m1.insert(make_pair("saurabh1",110));

    m1.insert(make_pair("bhathiysa1",100));
    m1.insert(make_pair("surabhi1",120));

    m1.insert(make_pair("rishika1",23));

    map<string,int>m2;
    
    m2.insert(make_pair("saurabh2",110));

    m2.insert(make_pair("bhathiysa2",100));
    m2.insert(make_pair("surabhi2",120));

    m2.insert(make_pair("rishika2",23));


    cout<<"Print m1 map: \n";
    
    for(auto it:m1){
        cout<<it.first<<" "<<it.second<<"\n";
    }cout<<"\n\n";
    cout<<"Print m2 map: \n";
    for(auto it:m2){
        cout<<it.first<<" "<<it.second<<"\n";
    }cout<<"\n\n";
    cout<<"\nafter swapping the map:\n\n";
    
    swap(m1,m2);

    cout<<"Print m1 map: \n";
    for(auto it:m1){
        cout<<it.first<<" "<<it.second<<"\n";
    }cout<<"\n\n";

    cout<<"Print m2 map: \n";
    for(auto it:m2){
        cout<<it.first<<" "<<it.second<<"\n";
    }cout<<"\n\n";

 }