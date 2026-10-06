#include<bits/stdc++.h>
using namespace std;

int ls(vector<int>& arr,int target){
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the Targeted element: ";
    cin>>target;
    cout<<ls(arr,target);
    return 0;
}