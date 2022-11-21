#include<iostream>
using namespace std;
void countnumber(int n)
{
    if(n==1)return;
    n--;
    countnumber(n);
    cout<<n<<endl;
    
}
int main()
{
    int n;
    cin>>n;
    countnumber(n);
    return 0;
}