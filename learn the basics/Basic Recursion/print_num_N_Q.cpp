#include<iostream>
using namespace std;
//printing the number from 1 to N 
void printNumN(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    printNumN(i+1,n);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNumN(1,n);
    return 0;
}