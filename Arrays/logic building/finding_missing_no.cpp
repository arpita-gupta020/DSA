#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE 
// int missingNumber(vector<int>& nums){
//     int n=nums.size();
//     int num;
//     for(int i=0;i<=nums.size();i++){
//         num=i;
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(nums[j]==num){
//                 count++;
//             }
//         }
//         if(count==0){
//             return num;
//         }
//     }
// }

//Better Solution(HASHING)
// int missingNumber(vector<int>& nums){
//     int n=nums.size();
//     int hash[nums.size()+1]={0};
//     for(int i=0;i<n;i++){
//         hash[nums[i]]++;
//     }
//     for(int i=0;i<=n;i++){
//         if(hash[i]==0){
//             return i;
//         }
//     }
// }


//Better Solution(MAP)(on my own, actually its not that better)
// int missingNumber(vector<int>& nums){
//     int n=nums.size();
//     map<long,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[nums[i]]++;
//     }
//     for(int i=0;i<=n;i++){
//         int flag=0;
//         for(auto it : mpp){
//             if(it.first==i){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0){
//             return i;
//         }
//     }
// }

//OPTIMAL SOLUTION(XOR method)
// int missingNumber(vector<int>& nums){
//     int n=nums.size();
//     int xor1=0;
//     int xor2=0;
//     for(int i=0;i<n;i++){
//         xor2=xor2^nums[i];
//         xor1=xor1^i;
//     }
//     return xor2^(xor1^n);
// }


//OPTIMAL SOLUTION(SUM method)
int missingNumber(vector<int>& nums){
    int n=nums.size();
    int sum=0;
    int s2=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    return s2-sum;
}
int main(){
    int n;
    cout<<"Enter the N: ";
    cin>>n;
    cout<<"Now enter the elements one by one from 0 to N: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int missing=missingNumber(arr);
    cout<<"Missing number is: "<<missing;
    return 0;
}