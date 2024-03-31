#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>m1;

    m1.insert(make_pair("saurabh1",110));

    m1.insert(make_pair("bhathiysa1",100));
    m1.insert(make_pair("surabhi1",120));

    m1.insert(make_pair("rishika1",23));

    cout<<"Print: \n";
    
    for(auto it:m1){
        cout<<it.first<<" "<<it.second<<"\n";
    }cout<<"\n\n";

    m1.clear();//Clear function <= delete all element of the map 
  
    for(auto it:m1){
        cout<<it.first<<" "<<it.second<<"\n";
    }cout<<"\n\n";
   

}