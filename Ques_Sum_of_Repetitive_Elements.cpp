// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     int arr[7]={1,1,2,1,3,3,3};

//     map<int,int>m;
//     for(int i=0;i<7;i++){
//         m[arr[i]]++;
//     }
//     int size=m.size();
//     int an=0;
//     for(auto it:m){
//         if(it.second>1){
//             an=an+it.first;
//         }
//     }
//     cout<<"Sum of repetitive elements in array=>"<<an<<endl;
// }


#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector\n";
    vector<int>arr(n);
    for(int i=0;i<n;i++){// S.C=O(m),where m=distinct elements in vector
        cin>>arr[i];
    }

    map<int,int>m;
    for(int i=0;i<7;i++){// T.C.=O(n)
        m[arr[i]]++;
    }
    int size=m.size();
    int an=0;
    for(auto it:m){
        if(it.second>1){
            an=an+it.first;
        }
    }
    cout<<"Sum of repetitive elements in array=>"<<an<<endl;
}