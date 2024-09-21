#include <iostream>
using namespace std;

class linkedList
{

public:
    int data;
    linkedList *next;
    linkedList(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(linkedList *&head, int data)
{
    linkedList *node = new linkedList(data);
    node->next = head;
    head = node;
}

void insertAtTail(linkedList* &tail,int data){
    linkedList *endNode=new linkedList(data);
    endNode->next=NULL;
    tail->next=endNode;
    tail=endNode;
}

void printList(linkedList *&head){
    linkedList *pointer=head;
    while(pointer!=NULL){
        cout<<pointer->data<<" ";
        pointer=pointer->next;
    }
}

void insertElem(linkedList* &head,linkedList* &tail, int pos,int data){
    linkedList* node=new linkedList(data);
    linkedList* temp=head;
    bool isWithinBounds=true;
    for(int i=0;i<pos-2 ;i++){
        if(temp->next==NULL){
            cout<<"the provided position for insertion is out of bounds for the present linked list";
            isWithinBounds=false;
            break;
        }
        temp=temp->next;
    }
    if(isWithinBounds){
    node->next=temp->next;
    temp->next=node;
    if(node->next==NULL){
       tail=node;
    }
 }
}

void deleteElem(int pos,linkedList* &head){
    linkedList* temp=head;

    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    linkedList* elemToDel=temp->next;
    temp->next=elemToDel->next;

}

int main()
{
    linkedList *node = new linkedList(5);
    linkedList *head=node;
    linkedList *tail=node;
    printList(head);
    cout<<endl;
    insertAtHead(head,15);
    printList(head);
    cout<<endl;
    insertAtHead(head,12);
    printList(head);
    cout<<endl;
    insertAtTail(tail,100);
    printList(head);
    cout<<endl;
    deleteElem(1,head);
    printList(head);
    
    return 0;
}