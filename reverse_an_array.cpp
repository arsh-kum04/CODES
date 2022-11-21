#include<iostream>
using namespace std;
void reversedarray(int a[],int s,int e)
{   
    if(s>=e)return;
    swap(a[s],a[e]);
    reversedarray(a,s+1,e-1);

}
int main()
{
    int arr[10];
    int i=0;
    while(i<10){
        cin>>arr[i];
        i++;
    }
    reversedarray(arr,0,9);
    cout<<"the reversed array is : "<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}