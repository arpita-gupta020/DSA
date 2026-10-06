#include<bits/stdc++.h>
using namespace std;

//*Brute force solution is that*->first push all the element of the array in the
//set and then the last element of the set will be the largest element in the 
//array


//OPTIMAL SOLUTION
int largestEle(vector<int> arr){
    int largest=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Largest element is : "<<largestEle(arr);
    return 0;
}