
#include<iostream>
#include<unordered_map>
using namespace std;
pair<char,int> Max_Fre_Number(char arr[],int n);
int main(){
    char arr[7]={'q','e','t','q','q','r','e'};
    pair<char,int>a=Max_Fre_Number(arr,7);
    cout<<"Maximum number of character frequncy is: "<<a.second<<endl;
    cout<<"Maximum number of character is: "<<a.first<<endl;
}

pair<char,int> Max_Fre_Number(char arr[],int n){

    unordered_map<char,int>count;

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    char ans=-1;
    int max=INT16_MIN;

    for(auto i:count){
        if(i.second>max){
            ans=i.first;
            max=i.second;
        }
    }
    pair<char,int>answer=make_pair(ans,max);
    
    return answer;

}