#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void display(Node* root){
    if(root==NULL) return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

int sumNode(Node* root){
    if(root==NULL) return 0;
    return root->val+sumNode(root->left)+sumNode(root->right);
}

int sizeTree(Node* root){
    if(root==NULL) return 0;
    return 1+sizeTree(root->left)+sizeTree(root->right);
}

int maxVal(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxVal(root->left),maxVal(root->right)));
}

int minVal(Node* root){
    if(root==NULL) return INT_MAX;
    return min(root->val,min(minVal(root->left),minVal(root->right)));
}

int levelTree(Node* root){
    if(root==NULL) return 0;
    return 1+max(levelTree(root->left),levelTree(root->right));
}

int main(){
    Node* a= new Node(1);
    Node* b= new Node(2);
    Node* c= new Node(3);
    Node* d= new Node(4);
    Node* e= new Node(5);
    Node* f= new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    display(a);
    cout << endl;

    cout << "Sum = " << sumNode(a) << endl;

    cout << "Size is " << sizeTree(a) << endl;

    cout << "Node with max value " << maxVal(a) << endl;
    cout << "Node with min value " << minVal(a) << endl;

    cout << "Level of tree " << levelTree(a) << endl;

    return 0;
}

// 236           
// 543
// 100           
// 226
// 979