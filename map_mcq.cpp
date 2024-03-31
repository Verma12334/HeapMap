// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<int,int>m;
//     m.insert({1,10});
//     m.insert({1,20});//use m[1]=20;<=this is update the value of 1 
//     m.insert({2,30});
//     m[4]=40;
//     for(auto i:m){
//         cout<<i.first<<"-"<<i.second<<endl;
//     }
// } 
/*Answer 1-10
          2-30
          4-40
        */


// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,char>m={{1,'a'},{2,'b'},{3,'c'},{4,'d'}};

//     m.erase(m.find(3),m.end());
//     for(auto i:m){
//         cout<<i.first<<"-"<<i.second<<endl;
//     }
// }
//ans 1-a
//    2-b