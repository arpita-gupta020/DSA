//SOME IMPORATANT DETAILS ABOUT THE QUESTION
//Return the number of unique elements in the array.

//If the number of unique elements be k, then,

//Change the array nums such that the first k elements of nums contain the unique values in the order that they were present originally.
//The remaining elements, as well as the size of the array does not matter in terms of correctness.

#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE-> first place all the elements of the array in the set, to get unique elements.
//then u have to traverse in the set and place all those unique and sorted elements one by one in the original array starting places by replacing already existing values.
//then at whatever position i index will be ,that will be your no. of unique elements.

//OPTIMAL SOLUTION(Two Pointer Method)
int removeDuplicates(vector<int>& arr){
    int n=arr.size();
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            arr[j+1]=arr[i];
            j++;
        }
    }
    return j+1;
}
int main(){
    int n;
    cout<<"Enter the no. of elements in the array in sorted manner only: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Number of unique elements in the array: "<<removeDuplicates(arr);
    return 0;
}