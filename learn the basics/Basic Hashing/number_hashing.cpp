#include<iostream>
using namespace std;

//we have an integer array and we need to find the frequency of certain numbers in that array.

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //brute force solution
    // int q;
    // cout<<"\nEnter the number of queries: ";
    // cin>>q;
    // while(q--){
    //     int number;
    //     cout<<"enter the number: ";
    //     cin>>number;
    //     int count=0;
    //     for(int i=0;i<n;i++){
    //         if(number==arr[i]){
    //             count++;
    //         }
    //     }
    //     cout<<"frequency of "<<number<<" : "<<count<<endl;
    // }

    //better solution(but it will also create problem if we want to hash a number which is of 10*8 or 10*9 order as it will throw an error.)
    ////pre-computation
    
    int hash[13]={0};//we are considering that array 'arr' have possible maximum element as 12 in it.That's why we have taken 13 as the size of hash array.
    for(int i=0;i<n;i++){
       hash[arr[i]]++; 
    }

    ////fetch
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int num;
        cout<<"enter the number: ";
        cin>>num;
        //fetch
        cout<<"frequency of "<<num<<" : "<<hash[num]<<endl;
    }

    return 0;
}