#include<iostream>
using namespace std;
/*this time printing from N to 1 using backtracking, means we are not allowed to 
do f(i-1,n).*/

void printNumN_rev(int i,int n){
    if(i>n){
        return;
    }
    printNumN_rev(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNumN_rev(1,n);
    return 0;
}