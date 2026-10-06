#include<bits/stdc++.h>
using namespace std;

int SsmallestEle(vector<int> arr){
    int smallest=arr[0];
    int Ssmallest=INT_MAX;//IMPORTANT
    for(int i=1;i<arr.size();i++){
        if(arr[i]<smallest){
            Ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<Ssmallest){
            Ssmallest=arr[i];
        }
    }
    return Ssmallest;
}

int main(){
    int n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second smallest element is : "<<SsmallestEle(arr);
    return 0;
}