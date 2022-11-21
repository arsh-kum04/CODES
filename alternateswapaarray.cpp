#include <iostream>
using namespace std;
void swapalt(int arr[],int n){
    int start=0;
    int end=start+1;
    
    while(start<n-1){
        swap(arr[start],arr[end]);
        start+=2;
        end+=2;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[10],b[10];
    int n=5;
    int m=5;
    cout<<"enter the element of 1st array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element of 2nd array"<<endl;
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    swapalt(a,n);
    printarray(a,n);
    cout<<endl;
    swapalt(b,m);
    printarray(b,m);
}