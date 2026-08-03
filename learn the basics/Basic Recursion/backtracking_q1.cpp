#include<iostream>
using namespace std;

/*here we are printing number from 1 to N but using Backtracking means this time you are not allowed to
do +1 that is f(i+1,n).*/

void printNumN(int i,int n){
    if(i<1){
        return;
    }
    printNumN(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNumN(n,n);
    return 0;
}