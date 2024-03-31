#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>m1;

    m1.insert(make_pair("saurabh1",110));

    m1.insert(make_pair("bhathiysa1",100));
    m1.insert(make_pair("surabhi1",120));

    m1.insert(make_pair("rishika1",23));
    
    cout<<"Print order\n";
    map<string,int>::iterator itr;
    for(itr=m1.begin();itr!=m1.end();itr++){
        cout<<itr->first<<"  "<<itr->second<<endl;
    }
   
   cout<<"print reverse oredr\n";
    map<string,int>::reverse_iterator it;
    for(it=m1.rbegin();it!=m1.rend();it++){
        cout<<it->first<<"  "<<it->second<<endl;
    }
   

}