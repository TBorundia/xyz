#include"stdio.h"
#include"LinQueue.h"

int main()
{
    struct Queue q;
    createQueue(&q, 5);
 
    addElement(&q, 10);
    addElement(&q, 20);
    addElement(&q, 30);
    addElement(&q, 40);
    addElement(&q, 50);
    printQueue(q);
    int val1 = addElement(&q, 60);
    if (val1 == 0)
    {
        printf("Queue is full. Addition failed.\n");
    }
    int val2 = deleteElement(&q);
    printf("Deleted element: %d\n", val2);
    printQueue(q);
    printf("Front value: %d\n", frontVal(&q));
    printf("Rear value: %d\n", rearVal(&q));

    addElement(&q, 60);
    printQueue(q);

    printf("Front value: %d\n", frontVal(&q));
    printf("Rear value: %d\n", rearVal(&q));

    return 0;
}