#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"*";
        }
        for(int j=1;j<=i*2;j++){
            cout<<" ";
        }
        for(int q=1;q<=n-i;q++){
            cout<<"*";
        } 
        cout<<endl;
    }
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
    return 0;
}