#include<iostream>
#include<string.h>
using namespace std;

void check(string s){
        string temp=s;
        //cout<<temp.size()<<endl;
        int start=0;
        int end=s.size()-1;
        while(end>=0){
            temp[start]=s[end];
            //cout<<temp[start]<<endl;
            start++;
            end--;
        }
        //cout<<temp<<endl;;
        if(temp==s)
        cout<<"yes string is a palindrome";
        else cout<<"no string is not a palindrome";
        
}
int main(){
    string s="";
    cin>>s;
    //cout<<s<<endl;
    check(s);
    return 0;

}