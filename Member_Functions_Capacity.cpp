#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>m1;
    cout<<"Max.size of the map: "<<m1.max_size()<<endl;
    m1.insert(make_pair("saurabh1",110));

    m1.insert(make_pair("bhathiysa1",100));
    m1.insert(make_pair("surabhi1",120));

    m1.insert(make_pair("rishika1",23));

   if(m1.empty()){
    cout<<"Map is empty:\n";
   }
   else{
    cout<<"Map is not enpty:\n";
   }

   cout<<"\nSize of map: "<<m1.size()<<endl;

   cout<<"Max.size of the map: "<<m1.max_size()<<endl;
     
      cout<<m1["saurabhi"]<<endl;


}