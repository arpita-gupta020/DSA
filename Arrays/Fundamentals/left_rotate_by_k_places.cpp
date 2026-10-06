#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE-> first tmake temp, then shift the element by k places,then put all
//the elements of temp into the back side of the array again

//OPTIMAL SOLUTION
void rotateArrayByK(vector<int>& arr,int k){
    int n=arr.size();
    k=k%n;//so that k remain k<=n always
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.begin()+n);
    reverse(arr.begin(),arr.begin()+n);
}

int main(){
    int n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<endl;
    rotateArrayByK(arr,k);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}