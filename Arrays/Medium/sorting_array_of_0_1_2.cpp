#include<bits/stdc++.h>
using namespace std;
//Brute solution -> Use any sorting algorithm (ex-> merge sort, quick sort)

//Better solution
// void sortZeroOneTwo(vector<int>& nums){
//     int n=nums.size();
//     int cnt0=0;
//     int cnt1=0;
//     int cnt2=0;
//     for(int i=0;i<n;i++){
//         if(nums[i]==0){
//             cnt0++;
//         }else if(nums[i]==1){
//             cnt1++;
//         }else{
//             cnt2++;
//         }
//     }
//     for(int i=0;i<cnt0;i++){
//         nums[i]=0;
//     }
//     for(int i=cnt0;i<cnt0+cnt1;i++){
//         nums[i]=1;
//     }
//     for(int i=cnt0+cnt1;i<n;i++){
//         nums[i]=2;
//     }
// }

//OPTIMAL solution(Dutch National Flag Algorithm)
void sortZeroOneTwo(vector<int>& nums){
    int n=nums.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }

}
int main(){
    int n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array, it should be either 0, 1 or 2: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Entered array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sortZeroOneTwo(arr);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}