#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

struct CQueue {
    int items[MAX_SIZE];
    int front, rear;
};

// initialize Circular Queue
void createCQueue(struct CQueue* cq) {
    cq->front = cq->rear = -1;
}

// Circular Queue is empty
bool isEmpty(struct CQueue cq) {
    return (cq.front == -1);
}

// Function to enqueue
void enqueue(struct CQueue* cq, int value) {
    if ((cq->rear + 1) % MAX_SIZE == cq->front) {
        printf("Queue is full\n");
        return;
    }
    if (cq->front == -1) {
        cq->front = 0;
    }
    cq->rear = (cq->rear + 1) % MAX_SIZE;
    cq->items[cq->rear] = value;
}

// Function to dequeue
int dequeue(struct CQueue* cq) {
    int value;
    if (isEmpty(*cq)) {
        printf("Queue is empty\n");
        return -1;
    }
    value = cq->items[cq->front];
    if (cq->front == cq->rear) {
        cq->front = cq->rear = -1;
    } else {
        cq->front = (cq->front + 1) % MAX_SIZE;
    }
    return value;
}

// Function BFS
void BFS(int v, int G[][v], int SRC, int visited[]) {
    struct CQueue cq;
    createCQueue(&cq);
    visited[SRC] = 1;
    printf("%d ", SRC);
    enqueue(&cq, SRC);
    while (!isEmpty(cq)) {
        SRC = dequeue(&cq);
        for (int i = 0; i < v; i++) {
            if (G[SRC][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                printf("%d ", i);
                enqueue(&cq, i);
            }
        }
    }
}

int main() {
    int v = 5; // Number of vertices
    int G[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 0, 0}
    };

    int visited[v];
    for (int i = 0; i < v; i++) {
        visited[i] = 0; 
    }

    printf("BFS: ");
    BFS(v, G, 0, visited);

    return 0;
}

