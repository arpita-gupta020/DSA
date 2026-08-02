#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n1,n2;
    cout<<"Enter a number1:";
    cin>>n1;
    cout<<"Enter a number2:";
    cin>>n2;
    //brute force solution................................ T.C.-> O(min(n1,n2))
    // int gcd=1;
    // for(int i=1;i<=min(n1,n2);i++){
    //     if(n1%i==0 && n2%i==0){
    //         gcd=i;
    //     }
    // }
    // cout<<"gcd of these two numbers is: "<<gcd;

    //Another brute force solution in reverse............. T.C.-> O(min(n1,n2))
    // int gcd=1;
    // for(int i=min(n1,n2);i>=1;i--){
    //     if(n1%i==0 && n2%i==0){
    //         gcd=i;
    //         break;
    //     }
    // }
    // cout<<"gcd of these two numbers is: "<<gcd;

    //best solution to calculate gcd or hcf of two numbers T.C.-> o(log(phi)min(n1,n2))

    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        cout<<"gcd of both numbers is: "<<n2;
    }else{
        cout<<"gcd of both numbers is: "<<n1;
    }
    return 0;
}