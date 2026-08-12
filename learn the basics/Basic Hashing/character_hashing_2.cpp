#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //this time in the string character can be lowercase or uppercase, it can be anything.
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //precomputation
    int hash[256]={0};//that's why we have kept the size of hash array to be 256 since 256 characters are there. 
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter the char: ";
        cin>>c;
        //fetch
        cout<<"frequency of "<<c<<" : "<<hash[c]<<endl;
    }
    return 0;
}