#include<iostream>
#include<unordered_map>
using namespace std;
int Max_Fre_Number(char arr[],int n);
int main(){
    char arr[7]={'q','e','t','q','q','r','e'};
    int max=Max_Fre_Number(arr,7);
    cout<<"Maximum number of character frequncy is: "<<max<<endl;
}

int Max_Fre_Number(char arr[],int n){

    unordered_map<char,int>count;

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    int ans=-1;
    int max=INT16_MIN;

    for(auto i:count){
        if(i.second>max){
            ans=i.second;
            max=i.second;
        }
    }
    return ans;

}

