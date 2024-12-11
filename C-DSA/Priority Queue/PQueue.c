#include <stdio.h>

#define MAX_SIZE 50

struct DATA {
    int pid;
    int priority;
};

struct PQueue {
    struct DATA data[MAX_SIZE];
    int front, rear, max;
};

void createQueue(struct PQueue *pq, int max) {
    pq->max = max;
    pq->front = pq->rear = -1;
}

int isEmpty(struct PQueue pq) {
    if (pq.front == -1) {
        return 1;
    } else {
        return 0;
    }
}
  
int isFull(struct PQueue pq) {
    if (pq.rear == (pq.max - 1)) {
        return 1;
    } else {
        return 0;
    }
}

int enqueue(struct PQueue *pq, struct DATA data) {
    if (isFull(*pq)) {
        return -1;
    } else {
        int i;
        i = pq->rear;
        while (i >= pq->front && pq->data[i].priority < data.priority) {
            pq->data[i + 1] = pq->data[i];
            i--;
        }
        pq->data[i + 1] = data;
        pq->rear++;
        return 1;
    }
}

int dequeue(struct PQueue *pq) {
    if (isEmpty(*pq)) {
        return -1;
    } else {
        struct DATA element = pq->data[pq->front];
        pq->front++;
        printf("DEQUEUED ELEMENT is\nPID: %d\nPRIORITY: %d\n", element.pid, element.priority);
        return 1;
    }
}

int main() {
    struct PQueue pq;
    createQueue(&pq, MAX_SIZE);

    struct DATA d1 = {1, 3};
    struct DATA d2 = {2, 1};
    struct DATA d3 = {3, 5};
    struct DATA d4 = {4, 2};

    enqueue(&pq, d1);
    enqueue(&pq, d2);
    enqueue(&pq, d3);
    enqueue(&pq, d4);

    printf("Front: %d, Rear: %d\n", pq.front, pq.rear);

    dequeue(&pq);
    dequeue(&pq);

    printf("Front: %d, Rear: %d\n", pq.front, pq.rear);

    return 0;
}
