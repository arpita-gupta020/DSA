#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int a=1;a<=n;a++){
        for(int b=1;b<=a;b++){
            cout<<"*";
        }
        for(int c=1;c<=(n-a)*2;c++){
            cout<<" ";
        }
        for(int d=1;d<=a;d++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int q=1;q<=i*2;q++){
            cout<<" ";
        }
        for(int x=1;x<=n-i;x++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}