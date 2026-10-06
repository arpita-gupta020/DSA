#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE-> we can sort the array first, then execute a loop in backward
//direction i.e. from n-1 to 0, and keep checking if arr[i]<largest, once this
//condition gets satisfied that will be the second smallest element.

//BETTER SOLUTION-> conducting two loops first is for finding largest. And second is
//for finding second largest in which we always keep the condition that slargest<largest.

//OPTIMAL SOLUTION
int SlargestEle(vector<int> arr){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}

int main(){
    int n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second largest element is : "<<SlargestEle(arr);
    return 0;
}