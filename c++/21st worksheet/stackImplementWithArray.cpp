#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top=-1;

    stack(int size){
        this->size=size;
        arr=new int(size);
    }
    void push(int value){
        if(top<size-1){
            top++;
            arr[top]=value;
        }else cout<<"stack is already filled";
    }

    void pop(){
        if(top>=0){
            top--;
        }else cout<<"stack is already empty";
    }
    void printStack(){
        if(top<0){
        cout<<"stack is empty,nothing to traverse upon";
        }else{
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
};

int main(){
    stack *obj=new stack(5);
    obj->push(7);
    obj->push(15);
    obj->push(21);
    obj->pop();
    obj->pop();
    obj->pop();
    obj->printStack();
    return 0;
}