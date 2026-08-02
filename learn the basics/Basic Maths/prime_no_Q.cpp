#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    //it is brute force solution...............

    // int i=2;
    // if(n==1){
    //     cout<<"it is not prime";
    // }
    // else{
    //     int flag=0;
    //     while(i<n){
    //         if(n%i==0){
    //             cout<<"it is not prime";
    //             flag=1;
    //             break;
    //         }
    //         else{
    //             i++;
    //         }
    //     }
    //     if(flag==0){
    //         cout<<"it is prime";
    //     }
    // }

    //better solution solution......................

    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    }
    if(count==2) cout<<"it is prime";
    else cout<<"it is not prime";
    return 0;
}