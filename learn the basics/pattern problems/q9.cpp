#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=(n-(i+1));j++){
            cout<<" ";
        }
        for(int q=1;q<=i+1;q++){
            cout<<"*";
        }for(int x=0;x<i;x++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int q=1;q<=n-i;q++){
            cout<<"*";
        }
        for(int x=1;x<=(n-(i+1));x++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}