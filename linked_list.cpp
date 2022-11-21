#include <iostream>
using namespace  std;



void beginsert();
void endinsert();
void randominsert();


struct node {
    int data;
    struct node *next;
};struct node *first;

    

int main(){
    cout<<"OPERATIONS ON SINGLE LINKED LIST :"<<endl;
        
        cout<<"choose from 1 2 and 3 :"<<endl;
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
            void beginsert();
            break;
            case 2: 
            void endinsert();
            break;
            case 3:
            void randominsert();
            break;
            default:cout<<"enter a valid choice:"<<endl;
        }
    return 0;
}
void beginsert(){
    struct node *ptr;
    
    ptr=(struct node*)malloc(sizeof(struct node));
    cout<<"enter data"<<endl;
    int data1;
    cin>>data1;
    ptr->data=data1;
    first=ptr;
    cout<<"data inserted and node is being created"<<endl;
}

void endinsert()
{
    struct node *ptr;
    
    ptr=(struct node*)malloc(sizeof(struct node));
    cout<<"enter data"<<endl;
    int data1;
    cin>>data1;
    ptr->data=data1;
    first=ptr;
    cout<<"data inserted and node is being created"<<endl;
}  