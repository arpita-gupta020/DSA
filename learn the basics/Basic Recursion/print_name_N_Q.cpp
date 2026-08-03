#include<iostream>
using namespace std;
 
void printNameN(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Arpita"<<endl;
    printNameN(i+1,n);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNameN(1,n);
    return 0;
}