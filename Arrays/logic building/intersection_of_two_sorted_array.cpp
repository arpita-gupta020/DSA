#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE->we can create a visited arrray corresponding to the array2 and keep all the elements in that array '0', and the size of that visited array is
//same as that of the size of the array2.Now we'll execute two nested loops,outer loop iterates in the array1, and inner loop iterates in the array2,each time we match the elements using this condition array2[j]==array1[i]->(j is for inner loop & i is for outer loop)
//if condition is true then we check next condition i.e. visited[j]==0, if it is then we push that same element(i.e. array1[i] or you can also use array2[j]) in the temp array, otherwise we continue the loop if visited[j]==1 is there.In that way we get a complete intersection array i.e. temp array.


//OPTIMAL SOLUTION(Two Pointer Solution)
vector<int> intersectionArray(vector<int>& a, vector<int>& b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> temp;
    while(i<n1 && j<n2){
        if(a[i]==b[j]){
            temp.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
    }
    return temp;
}

int main(){
    int n;
    cout<<"Enter the no. of elements in the array1: ";
    cin>>n;
    cout<<"Enter the elements of array1 now: ";
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the no. of elements in the array2: ";
    cin>>m;
    cout<<"Enter the elements of array2 now: ";
    vector<int> arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> intersectionArr = intersectionArray(arr1,arr2);
    cout<<"intersection array is : ";
    for(int i=0;i<intersectionArr.size();i++){
        cout<<intersectionArr[i]<<" ";
    }
    return 0;
}