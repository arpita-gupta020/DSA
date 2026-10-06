#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE->first we'll put all the non zeroes elements inside another temp array
//using a for loop and iterating over it. Then from that temp array we'll place all the non zeroes
//elements in the actual array starting indexes again using a for loop.Then whatever indices left of the actuall array, for them we'll
//place zeros there.

//OPTIMAL SOLUTION(Two Pointer Method)
void moveZeroes(vector<int>& nums){
    int n=nums.size();
    int j=-1;
    for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
    }
    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the no. of elements in the nums array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeroes(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}