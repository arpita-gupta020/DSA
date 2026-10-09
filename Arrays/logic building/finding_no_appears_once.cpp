#include<bits/stdc++.h>
using namespace std;
//Question-> finding the no. that appears only for 1 time whereas other number in that array appears twice.

//Brute Force
// int oneOccurrenceNumber(vector<int>& arr){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int num=arr[i];
//         int cnt=0;
//         for(int j=0;j<n;j++){
//             if(num==arr[j]){
//                 cnt++;
//             }
//         }
//         if(cnt==1){
//             return num;
//         }
//     }
//     return -1;
// } 

//Better Solution(HASH METHOD)
// int oneOccurrenceNumber(vector<int>& arr){
//     int n=arr.size();
//     int maxi=arr[0];
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);
//     }
//     int hash[maxi+1]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(hash[arr[i]]==1){
//             return arr[i];
//         }
//     }
//     return -1;
// }

//Better Solution(MAP METHOD)
// int oneOccurrenceNumber(vector<int>& arr){
//     int n=arr.size();
//     map<long,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         if(it.second==1){
//             return it.first;
//         }
//     }
//     return -1;
// }

//OPTIMAL SOLUTION(XOR Method)
int oneOccurrenceNumber(vector<int>& arr){
    int n=arr.size();
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    return xor1;
}
int main(){
    int n;
    cout<<"Enter the N: ";
    cin>>n;
    cout<<"Now enter the elements one by one from 0 to N: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }int oneTime=oneOccurrenceNumber(arr);
    cout<<"Number occuring for 1 time only: "<<oneTime;
    return 0;
}