#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50

struct Queue {
    int data[MAX_SIZE];
    int front, rear;
};

struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = -1;
    return q;
}

int isEmpty(struct Queue* q) {
    return (q->front == -1);
}

int isFull(struct Queue* q) {
    return (q->rear == MAX_SIZE - 1);
}

void enqueue(struct Queue* q, int item) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear++;
    q->data[q->rear] = item;
}

int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    int item = q->data[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    return item;
}

struct Stack {
    struct Queue* q1;
    struct Queue* q2;
};

struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->q1 = createQueue();
    stack->q2 = createQueue();
    return stack;
}

void push(struct Stack* stack, int item) {
    if (isEmpty(stack->q1)) {
        enqueue(stack->q2, item);
    } else {
        enqueue(stack->q1, item);
    }
}

int pop(struct Stack* stack) {
    if (isEmpty(stack->q1) && isEmpty(stack->q2)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }

    if (isEmpty(stack->q1)) {
        while (!isEmpty(stack->q2)) {
            enqueue(stack->q1, dequeue(stack->q2));
        }
    }

    while (stack->q1->front != stack->q1->rear) {
        enqueue(stack->q2, dequeue(stack->q1));
    }

    return dequeue(stack->q1);
}

int main() {
    struct Stack* stack = createStack();
    
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    printf("Pop: %d\n", pop(stack));
    printf("Pop: %d\n", pop(stack));
    push(stack, 4);
    printf("Pop: %d\n", pop(stack));
    printf("Pop: %d\n", pop(stack));

    return 0;
}
