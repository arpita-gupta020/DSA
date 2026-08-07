#include<iostream>
using namespace std;
//reversing an array using one pointer method.

void reverse(int i,auto arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
}

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"\nEnter the elements of the array one by one: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //try to print array before reversing.
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(0,arr,n);//reversing of the array is been started from index(i) we need to tell about and according to that it will be decided upto whch index reversing will be done based on the n-i-1 value.
    
    //lets try to print the array after reversing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}