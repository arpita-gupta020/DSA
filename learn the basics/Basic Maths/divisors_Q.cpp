#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int div=1;
    vector<int> v;
    while(div<=n){
        if(n%div==0){
            v.push_back(div);
            div++;
        }
        else{
            div++;
        }
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }

    return 0;
}