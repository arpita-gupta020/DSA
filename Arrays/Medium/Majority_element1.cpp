#include<bits/stdc++.h>
using namespace std;
//QUESTION -> find out the majority element that is lying in the array, appearing more than n/2 times
//Brute Solution
// int majorityElement(vector<int>& nums,int n){
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         cnt=0;
//         for(int j=0;j<n;j++){
//             if(nums[i]==nums[j]){
//                 cnt++;
//             }
//         }
//         if(cnt>(n/2)){
//             return nums[i];
//         }
//     }
//     return -1;
// }

//Better Solution(Hashing)
// int majorityElement(vector<int>& nums,int n){
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         mpp[nums[i]]++;
//     }
//     for(auto i: mpp){
//         if(i.second>(n/2)){
//             return i.first;
//         }
//     }
//     return -1;
// }

//Optimal solution
int majorityElement(vector<int>& nums,int n){
    int el;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            el=nums[i];
            cnt=1;
        }
        else if(el==nums[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(nums[i]==el){
            cnt1++;
        }
    }
    if(cnt1>(n/2)){
        return el;
    }
    else{
        return -1;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Majority element in the given array is: "<<majorityElement(arr,n);
    return 0;
}