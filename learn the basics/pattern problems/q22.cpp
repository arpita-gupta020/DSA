#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int num=n;
    for(int i=1;i<=n;i++){
        num=n;
        for(int j=1;j<=i-1;j++){
            cout<<num<<" ";
            num--;
        }
        for(int q=1;q<=(2*n)-(2*i)+1;q++){
            cout<<n-(i-1)<<" ";
        }
        num++;
        for(int j=1;j<=i-1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        int num=n;
        for(int j=1;j<=n-i;j++){
            cout<<num<<" ";
            num--;
        }
        for(int a=1;a<=(2*i)-1;a++){
            cout<<i+1<<" ";
        }
        num++;
        for(int j=1;j<=n-i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}