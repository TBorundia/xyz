#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
public:
    int size=0;
    Node* head=NULL;
    Node* tail=NULL;

    void insertAtEndTail(int val)
    {
        Node* temp = new Node(val);
        if(size==0)
        {
            head=tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtEnd(int val)
    {
        Node* temp = new Node(val);
        if(size==0) head=temp;
        else
        {
            Node* curr = head;
            while(curr->next != NULL)
            {
                curr=curr->next;
            }
            curr->next=temp;
        }
        size++;
    }

    void insertAtBeginning(int val)
    {
        Node* temp = new Node(val) ;
        if(size==0)
        {
            head=temp;
        }
        else
        {
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void insertAtPos(int val,int pos)
    {
        if(pos<0 || pos>size+1)
        {
            cout << "invalid" << endl;
        }
        else if(pos==0)
        {
            insertAtBeginning(val);
        }
        else if(pos==size)
        {
            insertAtEndTail(val);
        }
        else
        {
            Node* temp = new Node(val);
            Node* curr = head ;
            for(int i=0;i<pos-1;i++)
            {
                curr=curr->next;
            }
            temp->next=curr->next;
            curr->next=temp;
            size++;
        }
    }

    int getElement(int idx)     // Limitation: T.C.->O(n)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid " <<endl;
            return -1;
        }
        Node* curr = head;
        for(int i=0;i<idx;i++)
        {
            curr=curr->next;
        }
        return curr->val;
    }

    void deleteAtHead()
    {
        if(size==0)
        {
            cout << "Empty linked list :" << endl;
        }
        else if(size==1)
        {
            head=NULL;
            size--;
        }
        else
        {
            head=head->next;
            size--;
        }
    }

    void deleteAtLast()
    {
        if(size==0)
        {
            cout << "Empty linked list :" << endl;
            return;
        }
        else if(size==1)
        {
            head=tail=NULL;
            size--;
        }
        Node* curr = head;
        while(curr->next->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next = NULL;
        tail = curr;
        size--;
    }

    void deleteAtPos(int idx)
    {
        if(size==0)
        {
            cout << "Empty list" << endl;
        }
        if(idx < 0 || idx >= size)
        {
            cout << "Invalid" <<endl ;
            return;
        }
        else if(idx==0)
        {
            deleteAtHead();
            return;
        }
        else if(idx==size-1)
        {
            deleteAtLast();
            return;
        }
        else
        {
            Node* curr=head;
            for(int i=0;i<idx-1;i++)
            {
                curr=curr->next;
            }
            curr->next=curr->next->next;
            size--;
        }
    }
    void display()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout << temp->val << " ";
            temp=temp->next;
        }
        cout << endl;
    }
};
int main(){
    LinkedList LL;

    cout << "insert at end through tail : " << endl;
    LL.insertAtEndTail(10);
    LL.display();
    LL.insertAtEndTail(20);
    LL.display();

    cout << "insert at end through head : " << endl;
    LL.insertAtEnd(30);
    LL.display();

    cout << "insert at beg : " << endl;
    LL.insertAtBeginning(80);
    LL.display();

    cout << "insert at pos : " << endl;
    LL.insertAtPos(50,3);
    LL.display();

    cout << "Get Element of index : " << LL.getElement(2) << endl;

    cout << "Delete First" <<endl;
    LL.deleteAtHead();
    LL.display();

    cout << "Delete Last" <<endl;
    LL.deleteAtLast();
    LL.display();

    cout << "Delete at pos" <<endl;
    LL.deleteAtPos(3);
    LL.display();
}