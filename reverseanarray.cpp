#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[10],b[10];
    int n=10;
    int m=10;
    cout<<"enter the element of 1st array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element of 2nd array"<<endl;
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    reverse(a,n);
    printarray(a,n);
    endl;
    reverse(b,m);
    printarray(b,m);
}