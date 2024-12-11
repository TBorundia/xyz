#include"stdio.h"
#include"Circular.h"

int main()
{
    struct queue q;
    createQueue(&q,5);

    int val1=enQueue(&q,7);
    if(val1==1){
        printf("Addition Successfull!\n");
    }else{
        printf("Queue is full!\n");
    }
    int val3=enQueue(&q,35);
    if(val3==1){
        printf("Addition Successfull!\n");
    }else{
        printf("Queue is full!\n");
    }
    printQueue(&q);

    int val7=dQueue(&q);
    if(val7==0){
        printf("Queue is Empty!\n");
    }else{
        printf("Following element deleted : %d\n",val7);
    }
    printQueue(&q);

    int val9=frontVal(q);
    if(val9==-1){
        printf("Queue is Empty!\n");
    }else{
        printf("Front value : %d\n",val9);
    }
    printQueue(&q);

    int val10=rearVal(q);
    if(val10==-1){
        printf("Queue is Empty!\n");
    }else{
        printf("Rear value : %d\n",val10);
    }
    printQueue(&q);

    return 0;
}
