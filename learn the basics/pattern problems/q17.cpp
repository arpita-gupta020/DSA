#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char alpha='A';
        for(int q=1;q<=i;q++){
            cout<<alpha;
            alpha++;
        }
        alpha='A';
        for(int x=1;x<=i-1;x++){
            cout<<alpha;
            alpha++;
        }
        cout<<endl;
    }
    return 0;
}