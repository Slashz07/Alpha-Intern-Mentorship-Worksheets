#include<iostream>
using namespace std;

class queue{
    public:
    int size;
    int* arr;
    int front=-1;
    int rear=-1;

    queue(int size){
        arr=new int(size);
        this->size=size;
    }

    void push(int data){
        if(front==-1)
        front++;

        if(rear==size-1){
        cout<<"queue is already filled";
        }else{
        rear++;
        arr[rear]=data;
       }
    }

    void pop(){
        if(front==-1){
            cout<<"queue is already empty";
        }else if(front==rear){
            front=-1;
            rear=-1;
        }else{
            front++;
        }
    }

    void printQueue(){
        if(front==-1){
            cout<<"queue is empty";
        }else{
   for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        }
     
    }

    ~queue() {
    delete[] arr;
}

};



int main(){
    queue* q=new queue(5);
    q->push(7);
    q->push(77);
    q->push(787);
    q->pop();
    q->pop();
    q->pop();
    q->pop();
    q->printQueue();
    return 0;
}