#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int q=1;q<n;q++){
        for(int y=1;y<=n-q;y++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}