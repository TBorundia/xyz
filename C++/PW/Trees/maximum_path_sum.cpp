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

int max_depth(TreeNode* root,int& sum){
    if(root==NULL) return 0;
    int x=max(0,max_depth(root->left,sum));
    int y=max(0,max_depth(root->right,sum));
    sum=max(sum,x+y+root->val);
    return root->val+max(x,y);
}

int max_path_sum(TreeNode* root){
    if(root==NULL) return 0;
    int sum=INT_MIN;
    max_depth(root,sum);
    return sum;
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
    h->right=i;

    cout << max_path_sum(a) << endl;

    return 0;
}