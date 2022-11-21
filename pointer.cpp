#include<iostream>
using namespace std;
void printaddress(int *ptr){
    
    int a=10;
    //a=2;
    *ptr=0;
    *ptr=a;
    
    cout<<*ptr<<endl;

    //cout<<"the address of the integer is:"<<ptr<<(a=ptr+1)<<endl;
    //cout<<"the value at address of the integer is:"<<*ptr<<endl;
    
}
int main(){
    int n;
    cin>>n;
    
    //a=2;
    int *ptr=0;
    int a=10;
    *ptr=a;
    //printaddress(&n);
    return 0;
}
