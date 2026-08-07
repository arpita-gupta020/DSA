#include<iostream>
using namespace std;
//parameterised recursion

void sum(int i,int add){
    if(i<1){
        cout<<add<<endl;
        return;
    }
    sum(i-1,add+i);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sum(n,0);
    return 0;
}