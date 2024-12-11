#include "stdio.h"
#include "SLL.h"

int main()
{
    struct Node *head=NULL;
    head=insertAtEnd(head,35);
    if(head==NULL)
    {
        printf("Element cannot be added!\n");
    }else{
        printf("Element added successfully\n");
    }
    
    
    head=insertAtEnd(head,21);
    if(head==NULL)
    {
        printf("Element cannot be added!\n");
    }else{
        printf("Element added successfully\n");
    }
    display(head);
    
    
    head=insertAtBeginning(head,19);
    if(head==NULL)
    {
        printf("Element cannot be added!\n");
    }else{
        printf("\nElement added successfully\n");
    }
    display(head);
    
    
    head=deleteFirst(head);
    if(head==NULL)
    {
        printf("Linked list is empty!\n");
    }else{
        printf("Element Deleted successfully\n");
    }
    display(head);
    
    
    head=insertAtEnd(head,11);
    if(head==NULL)
    {
        printf("Element cannot be added!\n");
    }else{
        printf("Element added successfully\n");
    }
    display(head);
    
    
    int val1=deleteLast(&head);
    if(val1==-1)
    {
        printf("Linked list is empty!\n");
    }else{
        printf("Element Deleted successfully\n");
    }
    display(head);
    
    
    head=insertAtPos(head,45,2);
    if(head==NULL)
    {
        printf("Element cannot be added!\n");
    }else{
        printf("Element added successfully\n");
    }
    display(head);
    
    
    int val2=deleteAtPos(&head,2);
    if(val2==0)
    {
        printf("Element cannot be added!\n");
    }else{
        printf("Element deleted successfully\n");
    }
    display(head);
    
    
    int val3=search(head,21);
    if(val3==-1)
    {
        printf("Element not found!\n");
    }else{
        printf("Element found at %d position\n",val3);
    }
    
    
    head=reverse(head);
    if(head==NULL)
    {
        printf("LinkList is Empty!\n");
    }else{
        printf("LinkList reversed!\n");
    }
    display(head);
    
    
    head=reverse(head);
    if(head==NULL)
    {
        printf("LinkList is Empty!\n");
    }else{
        printf("LinkList reversed!\n");
    }
    display(head);
    
    
    int val4=detectLoop(head);
    if(val4==0)
    {
        printf("Loop not found!\n");
    }else{
        printf("Loop found \n");
    }
    return 0;
}