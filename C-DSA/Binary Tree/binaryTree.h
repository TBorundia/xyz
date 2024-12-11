#include<stdlib.h>
#include<stdio.h>
struct TreeNode{
    int data; 
    struct TreeNode*left;
    struct TreeNode*right;
};
//creating nodes 
struct TreeNode* createNode(){
    struct TreeNode*ptr;
    ptr=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    return ptr;
}

//function to find max
int max(int n1,int n2){
    if(n1>n2){
        return n1;
    }
    else{
        return n2;
    }
}

struct TreeNode*insert(struct TreeNode*root,int key){
    if(root==NULL){
        root=createNode();
        if(root==NULL){
            printf("Allocation failed");
        }
        else{
            root->data=key;
            root->left=root->right=NULL;
        }
        //if block for inserting a node at the end
        //insertion in bst will always be thru  a leaf node
    }
    else{
        if(key<root->data){
            root->left=insert(root->left,key);
            //if given value is smaller than the current node's data traverse in the left subtree
            //in returning sequence,root->left will have the address of the newNode if entered
        }
        if(key>root->data){
            root->right=insert(root->right,key);
               //if given value is greater than the current node's data traverse in the right subtree
            //in returning sequence,root->right will have the address of the newNode if entered
        }
    }
    return root;
}

void printTree(struct TreeNode* root, int space) {
    if (root == NULL) {
        return;
    }
    int count = 5; 
    space += count;
    printTree(root->right, space);
    printf("\n");
    for (int i = count; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", root->data);
    printTree(root->left, space);
}

struct TreeNode*search(struct TreeNode*root,int key){
        if(root==NULL){
            return root;
        }
        else{
            if(key<root->data){
               return (search(root->left,key));
               //searching in the left subtree 
            }
            if(key>root->data){
               return (search(root->right,key));
            //searching in the right subtree 
            }
            if(key==root->data){
                return root;
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

int countNLNodes(struct TreeNode* root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return 0;
    }
    return 1 + countNLNodes(root->left) + countNLNodes(root->right);
}


int height(struct TreeNode*root){
    if(root==NULL){
        return 0;
    }
    return (max(height(root->left),height(root->right)))+1;
}

struct TreeNode* inOrderSuccessor(struct TreeNode* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
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
        // Node with two children
        struct TreeNode* temp = inOrderSuccessor(root->right);
        root->data = temp->data; 
        root->right = deleteNode(root->right, temp->data); 
    }
    return root;
}

void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Diameter