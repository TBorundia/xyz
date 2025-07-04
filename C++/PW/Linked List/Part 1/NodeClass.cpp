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
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next=&b;
    b.next=&c;
    c.next=&d;

    cout << c.val << endl;
    cout << &b << endl;
    cout << a.next << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
 
    cout << "After While Loop : " << endl;
    Node *temp=&a;
    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
    return 0;
}