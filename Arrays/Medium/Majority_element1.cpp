#include<bits/stdc++.h>
using namespace std;
//QUESTION -> find out the majority element that is lying in the array, appearing more than n/2 times

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