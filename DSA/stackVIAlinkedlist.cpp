#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class stack{
    node * top;
    public:
    stack(){
        top=NULL;
    }
    void push(int num);
    int pop();
    void display();
};
void stack::push(int num){
    node *ptr=new node;
    ptr->data=num;
    ptr->next=top;
    top=ptr;
}
int stack::pop(){
    node *temp=top;
    int removed;
    if(top==NULL){
        cout<<"mpty"<<endl;
        // removed=-1;
    }
    else if(top->next==NULL){
        removed=temp->data;
        delete temp;
        top=NULL;
        // return removed;
        // cout<<removed<<endl;
    }
    else{
        removed=temp->data;
        top=top->next;
        delete temp;
        // return removed;
        // cout<<removed<<endl;
    }
    return removed;
}
void stack::display(){
    node *temp=top;
    if(top==NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        while(temp->next!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
}
int main () {
    stack st1;
    int ch,item;
    while(1){
        cin>>ch;
        switch (ch)
        {
        case 1:
            cin>>item;
            st1.push(item);
            break;
        case 2:
            cout<<"removed element is "<<st1.pop()<<endl;
            break;
        case 3:
            st1.display();
            break;
        default:
            exit(0);
        }
    }


    return 0;
}