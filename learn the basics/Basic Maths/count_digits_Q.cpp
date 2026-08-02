#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n!=0){
        int no_digits=0;
        while(n>0){
            no_digits+=1;
            n=n/10;
        }
        cout<<no_digits;
    }else{
            cout<<1;
        }
        
    return 0;
}