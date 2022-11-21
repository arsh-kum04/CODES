#include<iostream>
using namespace std;
void checksorted(int n,int arr[])
{   
    if(n==10)return;
    if(arr[n+1]>arr[n]){
        checksorted(n+1,arr);
}

}
int main()
{
    int arr[10];
    cout<<"enter the elements in an array of length 10: "<<" ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
        
    }
    
    checksorted(0,arr);
    return 0;
}