#include<stdio.h>
#define MAX 50
 
struct Queue
{
    int arr[MAX];
    int front,rear;
    int max_size;
};
void createQueue(struct Queue *q,int max_size)
{
    q->front=q->rear=-1;
    q->max_size=max_size;
}

int isFull(struct Queue q)
{
    if((q.rear)==(q.max_size-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Queue q)
{
    if((q.front==-1)){
        return 1;
    }
    else{
        return 0;
    }
}
int addElement(struct Queue *q,int element){
    if(isFull(*q))
    {
        return 0;
    }
    else{
        if((q->front==-1) && (q->rear=-1)){ //insertion in empty queue
            q->front=0;
        }
        q->rear++;
        q->arr[q->rear]=element;
        return 1;
    }
}

int deleteElement(struct Queue *q){
    int data=0;
    if(isEmpty(*q)){
        return data;
    }
    else{
        data=q->arr[q->front];
        if(q->front==q->rear){ //deletion of single element of the queue
            q->front=q->rear=-1;
        }
        q->front++;
        return data;
    }
}
int frontVal(struct Queue *q)
{
    return (q->arr[q->front]);
}

int rearVal(struct Queue *q)
{
    return(q->arr[q->rear]);
}

void printQueue(struct Queue q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front: %d, Rear: %d\n", frontVal(&q), rearVal(&q));
    printf("Queue elements: ");

    for (int i = q.front; i <= q.rear; i++) {
        printf("%d ", q.arr[i]);
    }

    printf("\n");
}