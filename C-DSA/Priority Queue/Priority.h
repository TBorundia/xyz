#define MAX_SIZE 50
#include<stdio.h>
struct DATA{
    int pid;
    int priority;
};
struct PQueue{
    struct DATA data[MAX_SIZE];
    int front,rear,max;
};

void createQueue(struct PQueue *pq,int max){

    pq->max=max;
    pq->front=pq->rear=-1;

}

int isEmpty(struct PQueue pq){
    if(pq.front==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct PQueue pq){
    if(pq.rear==(pq.max-1)){
        return 1;
    }
}

int enqueue(struct PQueue*pq,struct DATA data){
    if(isFull(*pq))
    {
        return -1;
    }
    else{
        int i;
        i=pq->rear;
        while(pq->data[i].priority<data.priority){
            pq->data[i+1]=pq->data[i];
            i--;
            if(i<pq->front){
                break;
            }
        }
        pq->data[i+1]=data;
        return 1;
    }
}

int dequeue(struct PQueue*pq){
    if(isEmpty(*pq)){
        return -1;
    }
    else{
        struct DATA element=pq->data[pq->front];
        pq->front--;
        printf("DEQUEUED ELEMENT is\n PID : %d\n PRIORITY : %d",pq->data->pid,pq->data->priority);
        return 1;
    }
}