#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
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

bool isLeaf(TreeNode* root){
    if (root==NULL) {
        return false; 
    }
    return (root->left == NULL && root->right == NULL);
}


void addleft(TreeNode* root,vector<int> &v){
    TreeNode* curr = root->left;
    while(curr){
        if(!isLeaf(curr)) v.push_back(curr->val);
        if(curr->left)
            curr=curr->left;
        else
            curr=curr->right;
    }
}

void addright(TreeNode* root,vector<int> &v){
    TreeNode* curr = root->right;
    vector <int> temp;
    while(curr){
        if(!isLeaf(curr)) v.push_back(curr->val);
        if(curr->right)
            curr=curr->right;
        else
            curr=curr->left;
    }
    reverse(temp.begin(),temp.end());
    v.insert(v.end(), temp.begin(), temp.end());
}

void addleaf(TreeNode* root,vector<int> &v){
        if(isLeaf(root)){
             v.push_back(root->val);
             return;
        }

        if(root->left)
            addleaf(root->left,v);
        if(root->right)
            addleaf(root->right,v);
}

vector <int> boundaryTraversal(TreeNode* root) {
    vector <int> v;
    if (root == NULL) return v;
    if(!isLeaf(root)) v.push_back(root->val);
    addleft(root,v);
    addleaf(root,v);
    addright(root,v);
    return v;
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

    vector<int> result = boundaryTraversal(a);

    cout << "Boundary Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    // Clean up
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    delete f;
    delete g;
    delete h;

    return 0;
}
