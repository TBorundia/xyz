#include <stdio.h>
#include <stdlib.h>

// TreeNode structure definition
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new TreeNode
struct TreeNode* createNode(int key) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to print the binary tree in LVR (In-order) format
void printLVR(struct TreeNode* root) {
    if (root != NULL) {
        printLVR(root->left);
        printf("%d ", root->data);
        printLVR(root->right);
    }
}

// Function to print the binary tree in VLR (Pre-order) format
void printVLR(struct TreeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        printVLR(root->left);
        printVLR(root->right);
    }
}

// Function to print the binary tree in LRV (Post-order) format
void printLRV(struct TreeNode* root) {
    if (root != NULL) {
        printLRV(root->left);
        printLRV(root->right);
        printf("%d ", root->data);
    }
}

// Main function
int main() {
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("In-order (LVR) traversal of the binary tree: ");
    printLVR(root);
    printf("\n");

    printf("Pre-order (VLR) traversal of the binary tree: ");
    printVLR(root);
    printf("\n");

    printf("Post-order (LRV) traversal of the binary tree: ");
    printLRV(root);
    printf("\n");

    return 0;
}
