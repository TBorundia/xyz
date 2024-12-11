#define MAX 50
#include"stdio.h"

struct queue
{
	int arr[MAX];
	int rear,front;
	int max_size;
};

void createQueue(struct queue *x,int ms)
{
	x->rear=x->front=-1;
	x->max_size=ms;
	printf("Front and rear = %d\n",x->rear);
	printf("Capacity = %d\n",ms);
}

int isQueueFull(struct queue x)
{
	if(x.front==(x.rear+1)%x.max_size)   //if((f==0 && r==ms-1)||(f==r+1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isQueueEmpty(struct queue x)
{
	if(x.front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int frontVal(struct queue x)
{
	if(isQueueEmpty(x))
	{
		return -1;
	}
	else
	{
		return x.arr[x.front];
	}
}

int rearVal(struct queue x)
{
	if(isQueueEmpty(x))
	{
		return -1;
	}
	else
	{
		return x.arr[x.rear];
	}
}

int enQueue(struct queue *x,int element)
{
	if(isQueueFull(*x))
	{
		//printf("The Queue is Full, cannot insert element!\n");
		return -1;
	}
	else
	{
		if(x->front==-1)
		{
			x->front++;
		}
		x->rear=(x->rear+1)%x->max_size;
		x->arr[x->rear]=element;
		return 1;
	}
}

int dQueue(struct queue *x)
{
	if(isQueueEmpty(*x))
	{
		return 0;
	}
	else if(x->rear==x->front)
	{
		int data=x->arr[x->front];
		x->rear=x->front=-1;
		return data;
	}
	else
	{
		int data=x->arr[x->front];
		x->front=(x->front+1)%x->max_size;
		return data;
	}
}

void printQueue(struct queue *q)
{
    if (q->rear == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Queue: ");
    int i = q->front;
    do
    {
        printf("%d ", q->arr[i]);
        i = (i + 1) % q->max_size;
    } while (i != (q->rear + 1) % q->max_size);
    
    printf("\n");
}
