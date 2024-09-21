#include <iostream>
using namespace std;

class stack
{
public:
    stack *next;
    int data;

    stack(int data)
    {
        this->data = data;
        this->next = NULL;
    }


    void push(stack* &top, int data)
    {
            // stack *temp = head;
            // for (int i = 0; i < top; i++)
            // {
            //     temp = temp->next;
            // }
            // stack *node = new stack(data);
            // temp->next = node;
            // top++;
            stack *node=new stack(data);
            node->next=top;
            top=node;
    }

    void pop(stack* &top)
    {
        if (top == NULL)
        {
            cout << "the stack is already empty";
        }
        else
        {
        stack* temp=top;
        top=top->next;
        delete temp;
        }
    }

    void printStack(stack* top){
        if(top==NULL){
            cout<<"stack is empty,nothing to traverse";
        }else{
            stack *temp=top;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
    }
};

int main()
{
    stack *node = new stack(5);
    stack *top=node;
    // stack*tail=node;
    node->push(top,7);
    node->push(top,71);
    node->push(top,77);
    node->push(top,87);
    node->pop(top);
    node->pop(top);
    node->pop(top);
    node->printStack(top);
    return 0;
}