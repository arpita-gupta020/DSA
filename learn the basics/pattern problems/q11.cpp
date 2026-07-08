#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            if(i%2==0 && j%2!=0){
                cout<<1;
            }
            else if(i%2==0 && j%2==0){
                cout<<0;
            }
            else if(i%2!=0 && j%2!=0){
                cout<<0;
            }
            else if(i%2!=0 && j%2==0){
                cout<<1;
            }
        }
        cout<<endl;
    }
    return 0;
}