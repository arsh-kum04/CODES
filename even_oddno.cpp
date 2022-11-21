#include<iostream>
using namespace std;

bool isprime(int num){
    for(int i=2;i<num;i++){
        if(num%i!=0){
            cout<<"prime"<<endl;
        return 1;}
        else
        {
            cout<<"is not prime"<<endl;
            return 0;
        }
        
    }
}

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    isprime(n);
    return 0;
}