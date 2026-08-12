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

    int min=n;
    int lowest_element;
    //precompute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        if(it.second<min){
            min=it.second;
            lowest_element=it.first;
        }
    }
    cout<<"Lowest occuring element is: "<<lowest_element;
    return 0;
}