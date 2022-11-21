#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack <char> s;
    string str="";
    cin>>str;
    string ans="";
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);

    }
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
        
    }
    cout<<ans<<endl;

}