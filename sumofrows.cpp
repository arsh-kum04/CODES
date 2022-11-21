#include<iostream>
using namespace std;
bool ispresent(int arr[][3],int target,int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target)return 1;
        }
    }
    return 0;
}
int main(){
    int a[3][3];
    cout<<"enter the element of 2d array"<<endl;
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++)cin>>a[i][j];
    } 
    int sum=0;
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           sum=sum+a[i][j];
           cout<<sum<<endl;
       };
       cout<<"sum of row "<<(i+1)<<" is "<<sum<<endl;
       sum=0;
    } 
    return 0;
}