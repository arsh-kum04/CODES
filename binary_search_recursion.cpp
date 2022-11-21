#include<iostream>
using namespace std;
void binary(int arr[],int s,int e,int k)
{   
    if(k>arr[e]||k<arr[s]){
        cout<<"element is not present in the array:"<<endl;
        return;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        cout<<"the element is present at index "<<mid+1<<" in the array "<<endl;
    else if(arr[mid]>k){
        binary(arr,s,mid-1,k);
    }
    else if(arr[mid]<k){
        binary(arr,mid+1,e,k);
    }
    
}
int main()
{
    int arr[10];
    cout<<"enter 10 elements in the array : "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=9;
    cout<<"enter the element which you want to find in the array : "<<endl;
    int key;
    cin>>key;
    binary(arr,start,end,key);
    
    return 0;
}