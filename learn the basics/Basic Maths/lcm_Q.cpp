#include<bits/stdc++.h>
using namespace std;

//here we have used the OPTIMAL approach to find the GCD and using that we have calculted LCM optimally.
//LCM of two numbers=(multiplication of those two numbers)/(GCD or HCF of thosse two numbers )
//LCM(n1,n2) = (n1*n2)/GCDof(n1,n2)
int main(){
    int n1,n2;
    cout<<"Enter a number1:";
    cin>>n1;
    cout<<"Enter a number2:";
    cin>>n2;
    int mul=n1*n2;
    int lcm=0;
    while(n1>0 && n2>0){
        if(n1>=n2) n1=n1%n2;
        else if(n2>n1) n2=n2%n1;
    }
    if(n1==0){
        lcm=mul/n2;
    }else{
        lcm=mul/n1;
    }
    cout<<"Lcm of both numbers is : "<<lcm;
    return 0;
}