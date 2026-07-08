#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        char alpha='A';
        for(int j=1;j<=n-i;j++){
            cout<<alpha<<" ";
            alpha++;
        }
        cout<<endl;
    }
    return 0;
}