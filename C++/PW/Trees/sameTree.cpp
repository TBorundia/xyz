#include<iostream>
#include<queue>
#include<stack>
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

bool sameTree(TreeNode* root1,TreeNode* root2) {
    if (root1 == NULL && root2 == NULL) return true;
    if (root1 == NULL || root2 == NULL) return true;
    if(root1->val!=root2->val){
        return false;
    }
    bool x=sameTree(root1->left,root2->left);
    bool y=sameTree(root1->right,root2->right);
    if(x==false || y==false) return false;
    else return true;
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

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left=h;

    cout << sameTree(a,a);

    return 0;
}
