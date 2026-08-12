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

    //precomputation(using ordered map, but we can also use unordered_map it will help in improving the time complexity.)
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter the number: ";
        cin>>num;
        cout<<"frequency of "<<num<<" : "<<mpp[num]<<endl;
    }
    return 0;
}