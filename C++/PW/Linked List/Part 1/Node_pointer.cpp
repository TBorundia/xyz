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

void display(Node* temp){     // T.C. ---> O(n) , S.C. ---->O(1)
    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
}

void display_recursively(Node* head){
    if(head==NULL){
        return;
    }
    cout << head->val << " ";
    display_recursively(head->next);
}

void display_reverse(Node* head){
    if(head==NULL){
        return;
    }
    display_reverse(head->next);
    cout << head->val << " ";
}

int size(Node* temp){
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;

    }
    return n;
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    cout << a->val << endl;

    cout << "After While Loop : " << endl;
    display(a);
    cout << endl;
    cout << "Size is " << size(a);
    cout << endl;
    display_recursively(a);
    cout << endl;
    display_reverse(a);
    return 0;
}