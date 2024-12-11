#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
}

struct TreeNode* createNode(){
    struct TreeNode*ptr;
    ptr=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    return ptr;
}

struct TreeNode*insert(struct TreeNode* root,int key){
    if(root==NULL){
        root=createNode();
        if(root==NULL){
            printf("Allocation Failed");
        }
        else{
            root->data=key;
            root->left=NULL;
            root->right=NULL;
        }
    }
    else{
        if(key<root->data){
            root->left=insert(root->left,key);
        }
        else if(key>root->data){
            root->right=insert(root->right,key);
        }
    }
    return root;
}

int countNodes(struct TreeNode*root){
    if(root==NULL){
        return 0;
    }
    //LVR approach
    return countNodes(root->left)+countNodes(root->right)+1;
}

int countLeafNodes(struct TreeNode*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        //for leaf nodes
        return 1;
    }
    return (countLeafNodes(root->left)+countLeafNodes(root->right));
}

int countNLNodes(struct TreeNode*root){
    if(root==NULL){
        return 0;
    }
    if(root->left!=NULL && root->right!=NULL){
        //for non-leaf nodes
        return 1;
    }
    return (countNLNodes(root->left)+countNLNodes(root->right)+1);
}

int height(struct TreeNode*root){
    if(root==NULL){
        return 0;
    }
    return (max(height(root->left),height(root->right)))+1;
}

struct TreeNode* delete(struct TreeNode*root,int key){
    if(root==NULL){
        return 0;
    }
    else if(){
        if(key<root->data){
            root->left=delete(root->left,key);
        }
        else if(key>root->data){
            root->right=delete(root->right,key);
        }
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
    }
    else if(root->left!=NULL || root->right!=NULL){
        if(root->left==NULL){
            struct TreeNode* temp 
        }
    }
}

struct node* inOrderSuccessor(struct Node* temp){
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

struct node* inOrderPredecessor(struct Node* temp){
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

struct TreeNode* delete(struct TreeNode* root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = delete(root->left, key);
    } else if (key > root->data) {
        root->right = delete(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }
        struct TreeNode* temp = inOrderSuccessor(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }
    return root;
}

struct TreeNode* inOrderSuccessor(struct TreeNode* temp) {
    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}
