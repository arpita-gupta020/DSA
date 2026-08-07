#include<iostream>
using namespace std;
//functional recursion

int sum(int i){
    if(i==0){
        return 0;
    }
    return i + sum(i-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sum(n);
    return 0;
}