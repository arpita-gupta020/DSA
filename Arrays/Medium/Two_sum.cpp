#include<bits/stdc++.h>
using namespace std;
//return the index of exactly two elements in the array whose sum is equal to target value
//this actually variety 2 question
//there is another variety 1 question also in which we only have to return "YES" if those two elements exist, if they do not then return "NO"

//Brute Force
// vector<int> twoSum(vector<int>& arr, int target){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 vector<int> ans={i,j};
//                 return ans;
//             }
//         }
//     }
// }

//Better Solution(Hashing)
// vector<int> twoSum(vector<int>& arr, int target){
//     map<int,int> mpp;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int a=arr[i];
//         int more=target-a;
//         if(mpp.find(more)!=mpp.end()){
//             vector<int> ans ={mpp[more],i};
//             return ans;
//         }
//         mpp[a]=i;
//     }
//     vector<int> ans2 ={-1,-1};
//     return ans2;
// }

//better solution(without map)(Not prefered because for this we have to make a new array containing pairs of elements with their respective index,so T.C and S.C. both increases which is not good.)
vector<int> twoSum(vector<int>& arr, int target){
    int n=arr.size();
    vector<pair<int,int>> newArr;
    for(int i=0;i<n;i++){
        newArr.push_back({arr[i],i});
    }
    sort(newArr.begin(),newArr.end());
    int n1=newArr.size();
    int i=0;
    int j=n1-1;
    int sum=0;
    while(i<j){
        sum=newArr[i].first + newArr[j].first;
        if(sum==target){
            return {newArr[i].second,newArr[j].second};
            // ans={i,j};
            // return ans;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int> arr={1, 11, 2, 10, 3};
    int k=3;
    vector<int> ans=twoSum(arr,k);
    cout<<"Indices of those two elements whose sum is "<<k<<" : ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}