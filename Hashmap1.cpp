#include<iostream>
#include<map>
using namespace std;

int main(){
    // ascending or desendeing order map
    //asendenig
    map<string,int>m1={{"saurabh",100},{"verma",606},{"ridhika",567}};
   
    pair<string,int>p=make_pair("sdf",456);

    pair<string,int>p1;
    p1=make_pair("asdf",345);

    m1.insert(p1);//insertion =>T.C.=O(log(n))

    m1["saurabh verma"]=5678;

   cout<<"Print before eraseing: \n";
   for(auto elt:m1){
    cout<<elt.first<<" "<<elt.second<<"\n";
   }cout<<"\n\n";

   m1.erase("asdf");//T.C.=O(log(n))

   cout<<"Print after eraseing:\n";

    cout<<"Print: \n";
   for(auto elt:m1){
    cout<<elt.first<<" "<<elt.second<<"\n";
   }cout<<"\n\n";

    //m1.insert("wdfegr",435); <= This is incorrect ...,insert function only take pair value
    m1.insert(make_pair("saurabh bhabhi",1000));
    //desending order map

    map<string,int,greater<string>>m2={{"saurabh1",100},{"verma1",606},{"ridhika1",567}};                                                                                                            
     for(auto elt:m2){
    cout<<elt.first<<" "<<elt.second<<"\n";
   }
}