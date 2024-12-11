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

void inorder(TreeNode* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void preorder(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void levelorder(TreeNode* root) {
    if (root == NULL) return;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();
        cout << curr->val << " ";
        if (curr->left != NULL) q.push(curr->left);
        if (curr->right != NULL) q.push(curr->right);
    }
}

void I_preorder(TreeNode* root){
    if (root == NULL) return;
    stack <TreeNode*> s;
    s.push(root);
    while(!s.empty()){
        TreeNode* curr = s.top();
        cout << curr->val << " ";
        s.pop();
        if (curr->right != NULL) s.push(curr->right);
        if (curr->left != NULL) s.push(curr->left);
    }
}

void I_inorder(TreeNode* root){
    if (root == NULL) return;
    stack <TreeNode*> s;
    TreeNode* curr = root;
    while(true){
        if (curr != NULL){
            s.push(curr);
            curr=curr->left;
        }
        else{
            if(s.empty()==true) break;
            curr=s.top();
            s.pop();
            cout << curr->val << " ";
            curr=curr->right;
        }

    }
}

void I_postorder_2S(TreeNode* root){
    if (root == NULL) return;
    stack <TreeNode*> s1,s2;
    TreeNode* curr = root;
    s1.push(curr);
    while(!s1.empty()){
        curr=s1.top();
        s2.push(curr);
        s1.pop();

        if (curr->left != NULL){
            s1.push(curr->left);
        }

        if(curr->right != NULL){
            s1.push(curr->right);
        }
    }
    while(!s2.empty()){
        cout << s2.top()->val << " ";
        s2.pop();
    }
}

void I_postorder_1S(TreeNode* root){
    if (root == NULL) return;
    stack <TreeNode*> s;
    TreeNode* curr = root;
    TreeNode* lastVisited = NULL;
    while(!s.empty() || curr!=NULL){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        else{
            TreeNode* temp=s.top();
            if(temp->right!=NULL && lastVisited!=temp->right){
                curr=temp->right;
            }
            else{
                cout << temp->val << " ";
                lastVisited=s.top();
                s.pop();
            }
        }
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

    cout << "Inorder traversal: ";
    inorder(a);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(a);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(a);
    cout << endl;

    cout << "Level order traversal: ";
    levelorder(a);
    cout << endl;

    cout << "Iterative Preorder traversal: ";
    I_preorder(a);
    cout << endl;

    cout << "Iterative Inorder traversal: ";
    I_inorder(a);
    cout << endl;

    cout << "Iterative Postorder traversal using 2 stack: ";
    I_postorder_2S(a);
    cout << endl;

    cout << "Iterative Postorder traversal using 1 stack: ";
    I_postorder_1S(a);
    cout << endl;

    return 0;
}
