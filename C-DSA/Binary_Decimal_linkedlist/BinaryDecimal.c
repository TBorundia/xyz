#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printBinary(struct Node* head) {
    if (head == NULL) {
        printf("0");
        return;
    }
    while (head != NULL) {
        printf("%d", head->data);
        head = head->next;
    }
}

struct Node* decimalToBinary(int decimal) {
    struct Node* binaryList = NULL;

    if (decimal == 0) {
        insertAtBeginning(&binaryList, 0);
    }

    while (decimal > 0) {
        int remainder = decimal % 2;
        insertAtBeginning(&binaryList, remainder);
        decimal = decimal / 2;
    }

    return binaryList;
}

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    struct Node* binaryList = decimalToBinary(decimalNumber);

    printf("Binary representation: ");
    printBinary(binaryList);
    printf("\n");

    while (binaryList != NULL) {
        struct Node* temp = binaryList;
        binaryList = binaryList->next;
        free(temp);
    }

    return 0;
}
