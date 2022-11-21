#include<iostream>
using namespace std;

void sayword(int n,string arr[])
{
    int digit;
    if(n==0)return;
    digit=n%10;
    n/=10;
    sayword(n,arr);
    cout<<arr[digit]<<" ";
}
int main()
{
    string arr[10]={"zero","one","two","three","four","five","six",
    "seven","eight","nine"};
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    sayword(n,arr);
    return 0;
}
