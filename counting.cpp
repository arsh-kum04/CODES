#include<iostream>
using namespace std;

void display(int n,int num){
    if(num==n+1)return;
    display(n,num+1);
    cout<<num<<" ";
}
    
    
int main(){
    int n;
    cin>>n;
    int num=1;
    display(n,num);
    return 0;
}