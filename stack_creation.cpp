#include<iostream>
using namespace std;

class stack{
    //propertiesss
    public:
    int *arr,top,size;
    //behavior of class stack
    stack(int size){
        this->size=size;
        arr=new int[size];
        top= -1;
    };
    void push(int n){
        if(size-top>1){
            top++;
            arr[top]=n;
            }
        else{
            cout<<"stax is overflowed"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stax is underflowed"<<endl;

        }
        
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"pehle kuch daal to stax me chamgadad"<<endl;
            return -1;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else return false;
    }
};
int main(){
    stack st(5);
    st.push(7);
    cout<<st.peek()<<endl;
    st.push(10);
    cout<<st.peek()<<endl;
    st.push(18);
    cout<<st.peek()<<endl;
    st.push(11);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    if(st.isempty()){
        cout<<"empty stax"<<endl;
    }
    else{cout<<"not empty staxx"<<endl;}
    
    return 0;
}