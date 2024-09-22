#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class stack{

    node* top;

    public:
    int size;

    stack(){
        size=0;
        top=NULL;
    }

    void push(int data){
        node *temp=new node();
        temp->data=data;
        temp->next=top;
        top=temp;
        size++;
    }

    void pop(){
        if(top==NULL){
            cout<<"stack is already empty";
        }else{
            node* temp=top;
            top=top->next;
            size--;
            delete temp;
        }
    }

    void printStack(){
        node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    int getSize(){
        return size;
    }

};

int main(){
    stack *myStack=new stack();
    myStack->push(7);
    myStack->push(71);
    myStack->push(24);
    myStack->pop();
    cout<<myStack->getSize()<<endl;
    myStack->printStack();
    return 0;
}