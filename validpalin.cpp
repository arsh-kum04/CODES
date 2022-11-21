#include<iostream>
#include<string.h>
using namespace std;
bool valid(char ch){
        if(('a'>=ch)&&(ch<='z')||('A'>=ch)&&(ch<='Z')||('0'>=ch)&&(ch<='9'))return 1;
        else return 0;
}
char tolower(char ch){
       if(('a'>=ch)&&(ch<='z')||('0'>=ch)&&(ch<='9'))
           return ch;
        else {
            char temp=ch -'A'+'a';
            return temp;
        }
        
}
bool isPalindrome(string s) {
        string temp=s;
        for(int i=0;i<s.length();i++){
            if(valid(s[i]))
            temp[i]=tolower(s[i]);
            else continue;
        }
        return 1;
}



int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s)<<endl;
    return 0;

}