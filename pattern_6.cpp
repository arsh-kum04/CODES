#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter a number: "<<endl;
   cin>>n;
    int i=1;
    

   while(i<=n ){
       int j=1;
       char ch='A';
       while(j<=n){
          // if(j==1){}
           cout<<ch;
           ch++;
           j++;
       }
       cout<<endl;
       i++;
   }

    return 0;
}