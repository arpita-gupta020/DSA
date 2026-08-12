#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=0;
    int highest_element;
    //precompute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        if(it.second>max){
            max=it.second;
            highest_element=it.first;
        }
    }

    cout<<"Highest occuring element is: "<<highest_element;
    return 0;
}