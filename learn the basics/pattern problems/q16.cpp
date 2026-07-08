#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    char alpha='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<alpha;
        }
        cout<<endl;
        alpha++;
    }
    return 0;
}