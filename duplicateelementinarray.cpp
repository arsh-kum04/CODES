//incomplete*********************************************


#include<iostream>
using namespace std;

void duplicate(int arr[],int n){
    int count=0;int start=0;
    for(int i = 0; i < n; i++){
        /*for(int j=0;j<n;j++){
            if((arr[i]&arr[j])==1)
            {
            cout<<"duplicate found of "<<arr[i]<<endl;

        }
    }*/
    if(arr[start]&arr[i]){
        start++;
        count++;
        cout<<"duplicate found of "<<arr[start]<<endl;
    }
    }
}

int main(){
    int a[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
    duplicate(a,n);
    return 0;
}