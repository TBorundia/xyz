#include<stdio.h>
#include"binaryTree.h"

int main() {
    struct TreeNode* root = NULL; 
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    printTree(root,0);

    int keyToSearch = 60;
    struct TreeNode* foundNode = search(root, keyToSearch);
    if (foundNode != NULL) {
        printf("Element %d found in the tree.\n", keyToSearch);
    } else {
        printf("Element %d not found in the tree.\n", keyToSearch);
    }

    int totalNodes = countNodes(root);
    int leafNodes = countLeafNodes(root);
    int nonLeafNodes = countNLNodes(root);
    int treeHeight = height(root);

    printf("Total nodes in the tree: %d\n", totalNodes);
    printf("Leaf nodes in the tree: %d\n", leafNodes);
    printf("Non-leaf nodes in the tree: %d\n", nonLeafNodes);
    printf("Height of the tree: %d\n", treeHeight);

    int keyToDelete = 30; // Key to delete from the BST
    root = deleteNode(root, keyToDelete);

    printf("BST after deletion of %d: ", keyToDelete);
    inorderTraversal(root);
    printf("\n");


    return 0;
}
