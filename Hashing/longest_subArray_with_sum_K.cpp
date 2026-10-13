#include<bits/stdc++.h>
using namespace std;

//Brute Force
// int longestSubarray(vector<int> &nums, int k){
//     int n=nums.size();
//     int maxLen=0;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=nums[j];
//             if(sum==k){
//                 maxLen=max(maxLen,j-i+1);
//             }
//         }
//     }
//     return maxLen;
// }

//Better Solution(HASHING METHOD)
int longestSubarray(vector<int> &nums, int k){
    map<int,int> mpp;
    int n=nums.size();
    int maxlen=0;
    int sum=0;
    for(int i=0;i<n;i++){
        int sum=sum+nums[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        else if(sum>k){
            int preSum=sum-k;
            if(mpp.find(preSum)!=mpp.end()){
                maxlen=max(maxlen,i-mpp[preSum]);
            }
        }
        if(mpp.find(sum)==mpp.end()){  //EDGE CASE
            mpp[sum]=i;
        }   

    }
    return maxlen;
}

//Optimal Solution(2 pointer approach)
// int longestSubarray(vector<int> &nums, int k){
//     int i=0;
//     int j=0;
//     int sum=nums[0];
//     int maxLen=0;
//     int n=nums.size();
//     while(j<n){
//         while(sum>k && i<j){
//             sum-=nums[i];
//             i++;
//         }
//         if(sum==k){
//             maxLen=max(maxLen,j-i+1);
//         }
//         j++;
//         if(j<n){
//             sum=sum+nums[j];
//         }
        

//     }
//     return maxLen;
// }
int main(){
    vector<int> arr={2,0,0,3};
    int k=3;
    int len=longestSubarray(arr,k);
    cout<<"Length of the longest subarray with sum "<<k<<" : "<<len;
    return 0;
}