#include<iostream>
using namespace std;
void sort1(int arr[],int n){
    int left=0;
    int right=n-1;

    while(left<right){
        while(left<right && arr[left] ==0){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    int arr[]={1,0,1,0,1,1,0,0,0,1};
    int n=10;
    sort1(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}