#include <stdio.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode() {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    return ptr;
}

int length(struct Node* head) {
    if (head == NULL) {
        return 0;
    } else {
        struct Node* temp = head;
        int count = 0; // Initialize count to 0
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }
}

struct Node* insertAtEnd(struct Node* head, int element) {
    if (head == NULL) {
        struct Node* newNode = createNode();
        newNode->data = element;
        newNode->prev = NULL;
        newNode->next = NULL;
        return newNode;
    } else {
        struct Node* newNode = createNode();
        newNode->data = element;
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
        newNode->next = NULL;
        return head;
    }
}

struct Node* insertAtBeg(struct Node* head, int element) {
    if (head == NULL) {
        struct Node* newNode = createNode();
        newNode->data = element;
        newNode->prev = NULL;
        newNode->next = NULL;
        return newNode;
    } else {
        struct Node* newNode = createNode();
        newNode->data = element;
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
}

struct Node* insertAtPos(struct Node* head, int element, int pos) {
    if (head == NULL) {
        struct Node* newNode = createNode();
        newNode->data = element;
        newNode->prev = NULL;
        newNode->next = NULL;
        return newNode;
    } else {
        if (pos < 1 || pos > length(head)) {
            return head;
        } else if (pos == 1) {
            head = insertAtBeg(head, element);
        } else {
            struct Node* newNode = createNode();
            struct Node* temp = head;
            int count = 1;
            newNode->data = element;
            while (count < pos - 1) {
                temp = temp->next;
                count++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
        return head;
    }
}

struct Node* deleteLast(struct Node* head) {
    if (head == NULL) {
        return head;
    } else {
        struct Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
        return head;
    }
}

struct Node* deleteFront(struct Node* head) {
    if (head == NULL) {
        return head;
    } else {
        struct Node* temp = head;
        head = temp->next;
        head->prev = NULL;
        free(temp);
        return head;
    }
}

struct Node* deletePos(struct Node* head, int pos) {
    if (head == NULL) {
        return head;
    }
    if (pos < 1 || pos > length(head)) {
        return head;
    } else if (pos == 1) {
        head = deleteFront(head);
    } else {
        int count = 1;
        struct Node* temp = head;
        while (count < pos - 1) {
            temp = temp->next;
            count++;
        }
        temp->next = temp->next->next;
        if (temp->next != NULL) {
            temp->next->prev = temp;
        }
        return head;
    }
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    printf("List after inserting elements at the end:\n");
    displayList(head);

    // Insert elements at the beginning
    head = insertAtBeg(head, 5);
    head = insertAtBeg(head, 15);

    printf("List after inserting elements at the beginning:\n");
    displayList(head);

    // Insert an element at a specific position
    head = insertAtPos(head, 25, 4);

    printf("List after inserting an element at position 4:\n");
    displayList(head);

    // Delete the last element
    head = deleteLast(head);

    printf("List after deleting the last element:\n");
    displayList(head);

    // Delete the first element
    head = deleteFront(head);

    printf("List after deleting the first element:\n");
    displayList(head);

    // Delete an element at a specific position
    head = deletePos(head, 3);

    printf("List after deleting an element at position 3:\n");
    displayList(head);

    // Free memory allocated for the list
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}