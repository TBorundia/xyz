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

int max_depth(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(max_depth(root->left),max_depth(root->right));
}

bool balancedTree(TreeNode* root){
    if(root==NULL) return true;
    int lst=max_depth(root->left);
    int rst=max_depth(root->right);

    if(abs(lst-rst)>1) return false;

    bool l=balancedTree(root->left);
    bool r=balancedTree(root->right);

    if(l==false || r==false) return false;
    return true;
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

    cout << balancedTree(a) << endl;

    return 0;
}