//**************************INCOMPLETED**************************
#include<iostream>
using namespace std;
bool key(int n,int k,int arr[]){
    if(n==10)return false;
    cout<<n<<endl;
    if(arr[n]==k)
            return true;
    else{
            key(n+1,k,arr);
        }
    
}



int main()
{
    int arr[10];
    int n=0;
    cout<<"enter the elements in an array : "<<endl;
    for(int i=0;i<10;i++)cin>>arr[i];
    int k;
    cout<<"enter an element to find in the array: "<<endl;
    cin>>k;
    cout<<key(n,k,arr)<<endl;
    bool ans=key(n,k,arr);
    if(ans)cout<<"key is present in the array "<<endl;
    else cout<<"key is not present in the array: "<<endl;
    return 0;
}