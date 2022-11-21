#include<iostream>
using namespace std;
void mer_ge(int *arr,int start,int end){
    int mid =(start+end)/2;

    int l1=mid-start+1;
    int l2=end-mid;
    int *arr1=new int[l1];
    int *arr2=new int[l2];
    int mainarrayindex=start;
    for(int i=0;i<l1;i++){
        arr1[i]=arr[mainarrayindex++];//1
    }
    mainarrayindex=mid+1;
    for(int j=0;j<l2;j++){
        arr2[j]=arr[mainarrayindex++];

    }
    int index1=0;
    int index2=0;
    mainarrayindex=start;
    while(index1<l1 && index2<l2){
        if(arr1[index1]<arr2[index2]){
            arr[mainarrayindex++]=arr1[index1++];
        }
        else {
            arr[mainarrayindex++]=arr2[index2++];
        }

    }
    while(index1<l1){
        arr[mainarrayindex++]=arr1[index1++];
    }
    while(index2<l2){
        arr[mainarrayindex++]=arr2[index2++];
    }
}
void ms(int *arr,int start,int n){
    if(start>=n){
        return;
    }
    int mid =(start+n)/2;
    ms(arr,start,mid);
    ms(arr,mid+1,n);
    mer_ge(arr,start,n);
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){cin>>arr[i];}
    ms(arr,0,4);
    for(int i=0;i<5;i++){cout<<arr[i]<<" ";}
    cout<<endl;
    return 0;
}
