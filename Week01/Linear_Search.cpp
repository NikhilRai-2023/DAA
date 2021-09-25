#include<iostream>
using namespace std;
int main(){
    int t,n,k,array[n];
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"Enter the size of array\n";
        cin>n;
        cout<<"Enter the elements of the array";
        for(int j=0;j<n;j++){
            cin>>array[j]; 
        }
    }
}