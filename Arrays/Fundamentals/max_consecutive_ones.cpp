#include<bits/stdc++.h>
using namespace std;


int findMaxConsecutiveOnes(vector<int>& arr){
    int count=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
            maxi=max(count,maxi);
        }
        else{
            count=0;
        }
        
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    cout<<"Now enter the elements one by one: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxele=findMaxConsecutiveOnes(arr);
    cout<<"Maximum consecutive ones: "<<maxele;
    return 0;
}