#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE-> first tranverse in the array1 and paas all the elements of array1 in the set st, then
//transverse in the array2 and paas all the elemnets of array2 in the set st.Due to that reason now the set st has all the elemnets in array1 and array2 
//without repetition.And now traverse in that set and push all the elements of that set in the noew array temp ehich actually the union array of those two sorted arrays,eventually we get an
//array in which all the elements are in sorted order and it is the union array.


//OPTIMAL SOLUTION
vector<int> unionArray(vector<int>& a, vector<int>& b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> temp;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(temp.size()==0 || temp.back()!=a[i]){
                temp.push_back(a[i]);
            }
            i++;
        }
        else if(a[i]>b[j]){
            if(temp.size()==0 || temp.back()!=b[j]){
               temp.push_back(b[j]); 
            }
            j++;
        }
    }
    while(i<n1){
        if(temp.size()==0 || temp.back()!=a[i]){
            temp.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(temp.size()==0 || temp.back()!=b[j]){
            temp.push_back(b[j]); 
        }
        j++;
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
    vector<int> unionArr = unionArray(arr1,arr2);
    for(int i=0;i<unionArr.size();i++){
        cout<<unionArr[i]<<" ";
    }
    return 0;
}