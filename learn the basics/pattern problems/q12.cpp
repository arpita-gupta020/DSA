#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int x=1;x<=(n-i)*2;x++){
            cout<<" ";
        }
        for(int q=i;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
    }
    return 0;
}