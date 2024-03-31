// #include<iostream>
// using namespace std;
// #include<map>
// // #include<ordered_map>
// int main(){
//     //creation 
//     map<string,int>m;

//     //insertaion
//     //1
//     pair<string,int>p=make_pair("saurabh",4);
//     m.insert(p);

//     //2
//     pair<string,int>pair2("lovely",2);
//     m.insert(pair2);

//     //3
//     m["mera"]=1;

//     //what will happen
//     m["mera"]=6;

//     m["mer"]=6;  
//     //iterator
//     cout<<" Print data using iterator\n";
//     map<string,int>::iterator it=m.begin();

//     while(it!=m.end()){
//         cout<<it->first<<" "<<it->second<<endl;
//         it++;
//     }
  
    
// }



#include<iostream>
using namespace std;
#include<map>

int main(){
    map<string,int>m;

    pair<string,int>p=make_pair("saurabh",7);
    m.insert(p);

    pair<string,int>p1("love",6);
    m.insert(p1);
    m["j"]++;

    m["jaan"]=6;
    cout<<m["hai"]<<endl;

    //iteraror
    map<string,int>::iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}//T.C.=O(log(n ))