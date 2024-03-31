#include<iostream>
#include<unordered_map>
using namespace std;
int Max_Fre_Number(int arr[],int n);
int main(){
    int arr[18]={3,5,56,6,7,7,7,6,5,54,4,4,3,3,324-2,56,78};
    int max=Max_Fre_Number(arr,18);
    cout<<"Maximum frequency of the number: "<<max<<endl;
}

int Max_Fre_Number(int arr[],int n){
    unordered_map<int,int>count;
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    int ans=-1;
    int max=INT16_MIN;

    for(auto i:count){
        if(i.second>max){
            max=i.second;
            ans=i.first;
        }
    }
    return ans;

}