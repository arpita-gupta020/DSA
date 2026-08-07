#include<iostream>
using namespace std;
//reversing an array using two pointers

void reverse(int l,int r,auto arr[]){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    reverse(l+1,r-1,arr);
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

    reverse(0,n-1,arr);//reversing of the array is been started from index=0 and it will valid upto end of the array that is n-1.

    //lets try to print the array after reversing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}