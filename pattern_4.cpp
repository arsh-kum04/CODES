#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter  a number: "<<endl;
    cin>>n;
    int i=1;
    /*int count=1;*/
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}