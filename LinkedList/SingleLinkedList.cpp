#include<iostream>
using namespace std;
class Node
{
    public:
    Node *next;
    int data;

    Node(int var)
    {
        data = var;
        next = nullptr;

    }
};

class LinkedList
{
    private:
    Node *head;
    public:
    LinkedList()
    {
        head = nullptr;
    }
    ~LinkedList()
    {
        Node *current = head ;
        while(current!=nullptr)
        {
            Node*temp = current->next ;
            delete current;
            // Action: The Heap memory at 0x100 is destroyed.
            // State of 'current': It is still a valid variable, but it holds 0x100 (which is now garbage).
            current = temp ;
        }

    }

    void insertAtStart(int val)
    {
        Node* newNode = new Node(val);
        newNode->next = head ;
        head = newNode;
    }

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if(head==nullptr)
        {
            head = newNode;
            return;
        }

        Node*temp =head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next = newNode;
    }
    
    void insertAtPos(int val,int pos)
    {
        if(pos==1)
        {
            insertAtStart(val);
            return;
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        for(int i = 1 ;i<pos-1&& temp->next!=nullptr;i++)
        {
            temp=temp->next;
        }
        if(temp==nullptr)
        {
            cout <<"position is out of bounds" <<endl;
        }
        newNode->next = temp->next ;
        temp ->next = newNode;
    }

    void deleteAtStart()
    {
        if(head==nullptr)
        {
            cout<<"list is empty"<<endl;
            return;
        }
        Node *temp = head;
        head = temp->next;
        delete temp;
    }
    void deleteAtEnd()
    {
        if(head==nullptr)
        {
            cout<<"list is empty"<<endl;
            return;
        }
        if(head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }
        Node *temp= head;
        while(temp->next->next!= nullptr)
        {
            temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
    
    void deleteAtPos(int pos)
    {
        if(head==nullptr)
        {
            cout<<"list is empty"<<endl;
            return;
        }
        if(pos==1)
        {
            deleteAtStart();
            return;
        }
        Node *temp = head;
        for(int i = 1 ;i<pos-1 && temp->next!=nullptr;i++)
        {
            temp=temp->next;
        }
        if(temp->next == nullptr)
        {
            cout<<"position is out of bounds"<<endl;
            return;
        }
        Node *nodeToDelete = temp->next ;
        temp->next = nodeToDelete->next ;
        delete nodeToDelete;

    }   

    void search(int key)
    {
        Node *temp = head;
        int pos = 1;
        while(temp!=nullptr)
        {
            if(temp->data == key)
            {
                cout<<"Element found at position "<<pos<<endl;
                return;
            }
            temp=temp->next;
            pos++;
        }
        cout<<"Element not found in the list"<<endl;
    }


    void Traverse()
    {
        Node *temp = head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

};


int main()
{
    LinkedList LL;
    LL.insertAtEnd(20);
    LL.insertAtEnd(30);
    LL.insertAtStart(10);
    LL.Traverse();
    cout<<"Inserting 25 at position 3 "<<endl;
    LL.insertAtPos(25,3);
    LL.Traverse();
    cout<<"Inserting 5 at start "<<endl;
    LL.insertAtStart(5);
    LL.Traverse();
    LL.search(25);
    cout<<"Deleting at end "<<endl;
    LL.deleteAtEnd();
    cout<<"Inserting 35 at end "<<endl;
    LL.insertAtEnd(35);
    LL.Traverse();
    cout<<"deleting at start "<<endl;
    LL.deleteAtStart();
    LL.Traverse();
    cout<<"Deleting at position 2 "<<endl;
    LL.deleteAtPos(2);
    LL.Traverse();
    cout<<"Deleting at end "<<endl;           

    return 0;
}