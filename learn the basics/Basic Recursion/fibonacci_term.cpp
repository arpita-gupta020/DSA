#include<iostream>
using namespace std;
//finding nth fibonacci term(My way)
// int fibonacci(int n,int a=0,int b=1,int cnt=2){
//     int c=a+b;
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     if(cnt==n){
//         return c;
//     }
//     return fibonacci(n,b,c,cnt+1);

// }

//finding the nth fibonacci term(better way using multiple recursion call)
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    int last=fibonacci(n-1);
    int slast=fibonacci(n-2);
    return last + slast;

}

int main(){
    int n;
    cout<<"Enter the fibonacci term u want: ";
    cin>>n;

    cout<<fibonacci(n);

    return 0;
}