#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *leftChild;
    node *rightChild;

    node(int data)
    {
        this->data = data;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};

node *buildTree()
{
    int data;
    cout << "enter the value of the node";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *temp = new node(data);

    cout << "enter value to insert node at left of " << data << endl;
    temp->leftChild = buildTree();

    cout << "enter value to insert node at right of " << data << endl;
    temp->rightChild = buildTree();

    return temp;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            
            if(!q.empty()){
            q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->leftChild)
            {
                q.push(temp->leftChild);
            }
            if (temp->rightChild)
            {
                q.push(temp->rightChild);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    root = buildTree();
    levelOrderTraversal(root);
    return 0;
}