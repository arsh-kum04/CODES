#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"enter the no of elements you want to store in this array"<<endl;

cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=0;
for(int j=0;j<n;j++){
    ans=ans^arr[j];
}
cout<<ans<<endl;
return 0;
}