#include<iostream>
using namespace std;

void printNumN_rev(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    printNumN_rev(i-1,n);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNumN_rev(n,n);
    return 0;
}