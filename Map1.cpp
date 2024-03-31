#include<iostream>
using namespace std;
#include<map>
// #include<ordered_map>
int main(){
    //creation 
    map<string,int>m;

    //insertaion
    //1
    pair<string,int>p=make_pair("saurabh",4);
    m.insert(p);
    

    //2
    pair<string,int>pair2("lovely",2);
    m.insert(pair2);

    //3
    m["mera"]=1;

    //what will happen
    m["mera"]=6;

    m["mer"]=6;  
    //iterator
    cout<<" Print data using iterator\n";
    map<string,int>::iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
  
    
}