#include<iostream>
using namespace std;

int sumnumber(int a)
{   
    if(a==0)return 0;
    else;
    return a+sumnumber(a-1);
}
int main()
{
    int n;
    cin>>n;
    
    cout<<"total sum upto the given integer is : "<<sumnumber(n)<<endl;

    return 0;
}
