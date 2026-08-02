#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int actual_number=n;
    int last_digit;
    int new_number=0;
    while(n>0){
        last_digit=n%10;
        new_number=new_number*10+last_digit;
        n=n/10;
    }
    if(new_number==actual_number){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}