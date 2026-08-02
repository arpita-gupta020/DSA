#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int  actual_number=n;
    int ld;
    int sum=0;
    int digits=0;
    while(n>0){
        digits+=1;
        n=n/10;
    }
    n=actual_number;
    while(n>0){
        ld=n%10;
        sum=sum+pow(ld,digits);
        n=n/10;
    }
    if(sum==actual_number){
        cout<<"it is armstrong";
    }else{
        cout<<"it is not an armstrong";
    }
    return 0;
}