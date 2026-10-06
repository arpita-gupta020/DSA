#include<bits/stdc++.h>
using namespace std;

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