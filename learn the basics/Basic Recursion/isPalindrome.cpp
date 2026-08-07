#include<bits/stdc++.h>
using namespace std;
//Checking whether a string is a palindrome or not.

bool isPalindrome(int i, string &s){
    if(i>=s.length()/2){
        return true;
    }
    if(s[i]!=s[s.length()-i-1]){
        return false;
    }
    return isPalindrome(i+1,s);
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    cout<<isPalindrome(0,s);//By 0 we mentioned that start checking from the 0 index, u can consider this to ba a mandatory value to be provided to use isPalindrome function.

    return 0;
}