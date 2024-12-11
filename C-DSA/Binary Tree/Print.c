#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

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

void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
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

int main() {
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("In-order traversal of the binary tree:\n");
    inorderTraversal(root);
    printf("\n");

    printf("\nTree-like representation of the binary tree:\n");
    printTree(root, 0);

    return 0;
}
