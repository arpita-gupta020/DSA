#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //precomputation
    int hash[26]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter the char: ";
        cin>>c;
        //fetch
        cout<<"frequency of "<<c<<" : "<<hash[c-'a']<<endl;
    }
    return 0;
}