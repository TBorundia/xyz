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

void zigzag(TreeNode* root) {
    if (root == NULL) return;
    queue<TreeNode*> q;
    q.push(root);
    int flag=1;
    while (!q.empty()) {
        if(flag==0){
            flag=1;
            TreeNode* curr = q.front();
            if (curr->left != NULL) q.push(curr->left);
            if (curr->right != NULL) q.push(curr->right);
        }
        else{
            flag=0;
            TreeNode* curr = q.front();
            if (curr->right != NULL) q.push(curr->right);
            if (curr->left != NULL) q.push(curr->left);
        }
        cout << q.front()->val << " ";
        q.pop();
    }

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

    zigzag(a);

    return 0;
}
