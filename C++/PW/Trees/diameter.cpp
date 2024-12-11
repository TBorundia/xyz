#include<iostream>
#include<climits>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int max_depth(TreeNode* root,int& d){
    if(root==NULL) return 0;
    int x=max_depth(root->left,d);
    int y=max_depth(root->right,d);
    d=max(d,x+y);
    return 1+max(x,y);
}

int diameter(TreeNode* root){
    if(root==NULL) return 0;
    int d=0;
    max_depth(root,d);
    return d;
}

int main() {
    TreeNode* b = new TreeNode(2);
    TreeNode* a = new TreeNode(1);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(8);
    TreeNode* i = new TreeNode(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left=h;

    cout << diameter(a) << endl;

    return 0;
}