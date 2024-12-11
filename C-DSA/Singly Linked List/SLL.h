#include"stdio.h"
#include"stdlib.h"

struct Node{
    int data;
    struct Node *link;
};

struct Node* createNode()
{
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    return ptr;
}

struct Node* insertAtEnd(struct Node *ptr,int elem)
{
    struct Node *newNode=createNode();
    if(newNode==NULL){
        return newNode;
    }
    newNode->data=elem;
    newNode->link=NULL;
    if(ptr==NULL){
        ptr=newNode;
        return ptr;
    }else{
        struct Node *temp=ptr;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newNode;
        return ptr;
    }
    
}

void display(struct Node *ptr)
{
	struct Node *temp=ptr;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->link;
	}
}

int length(struct Node *ptr)
{
	struct Node *temp=ptr;
	int count=0;
	while(temp!=NULL)
	{
		temp=temp->link;
		count++;
	}
	return count;
}

struct Node* insertAtBeginning(struct Node *ptr,int elem)
{
    struct Node *newNode=createNode();
    if(newNode==NULL){
        return newNode;
    }
    newNode->data=elem;
    newNode->link=NULL;
   	struct Node *temp=ptr;
    newNode->link=temp;
    ptr=newNode;
    return ptr;
}

struct Node* deleteFirst(struct Node *ptr)
{
	if(ptr==NULL)
	{
		return ptr;
	}else{
		struct Node *temp=ptr;
		int val=temp->data;
		ptr=temp->link;
		free(temp);
		printf("\n%d\n",val);
		return ptr;
	}
}

int deleteLast(struct Node **ptr)
{
	struct Node *temp=*ptr;
	int val;
	if(*ptr==NULL)
	{
		return -1;
	}
	else if(temp->link==NULL)
	{
		val=temp->data;
		*ptr=NULL;
		free(temp);
	}else{
		while(temp->link->link!=NULL)
		{
			temp=temp->link;
		}
		val=temp->link->data;
		free(temp->link);
		temp->link=NULL;
	}
	printf("\n%d\n",val);
	return 0;
}

struct Node* insertAtPos(struct Node *ptr,int elem,int pos)
{
	struct Node *newNode=createNode();
	if(newNode==NULL)
	{
		return newNode;
	}
	else if(pos<=0 || pos>length(ptr))
	{
		printf("Invalid position!\n");
	}
	else
	{
		if(pos==1)
		{
			ptr=insertAtBeginning(ptr,elem);
			return ptr;
		}
		else
		{
			newNode->data=elem;
			newNode->link=NULL;
			struct Node *temp=ptr;
			int count=0;
			while(count<pos-2)
			{
				temp=temp->link;
				count++;
			}
			newNode->link=temp->link;
			temp->link=newNode;
			return ptr;
		}
	}
}

int deleteAtPos(struct Node **ptr,int pos)
{
	if(*ptr==NULL)
	{
		return 0;
	}
	else if(pos<=0 || pos>length(*ptr))
	{
		printf("Invalid position!\n");
	}
	else
	{
		if(pos==1)
		{
			*ptr=deleteFirst(*ptr);
			return 1;
		}
		else
		{
			struct Node *temp=*ptr;
			int count=0;
			while(count<pos-2)
			{
				temp=temp->link;
				count++;
			}
			struct Node *val=temp->link;
			temp->link=temp->link->link;
			free(val);
			return 1;
		}
	}
}

int search(struct Node *ptr,int key)
{
	int pos=1;
	struct Node *temp=ptr;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			return pos;
		}
		temp=temp->link;
		pos++;
	}
	return -1;
}

struct Node* reverse(struct Node *ptr)
{
	if(ptr==NULL)
	{
		return ptr;
	}
	else
	{
		struct Node *prev=NULL;
		struct Node *next=NULL;
		struct Node *curr=ptr;
		while(curr!=NULL)
		{
			next=curr->link;
			curr->link=prev;
			prev=curr;
			curr=next;
		}
		ptr=prev;
		return ptr;
	}
}

int detectLoop(struct Node *ptr)
{
	struct Node *fast=ptr;
	struct Node *slow=ptr;
	while(fast!=NULL || fast->link!=NULL)
	{
		fast=fast->link->link;
		slow=slow->link;
		if(fast==slow)
		{
			return 1;
		}
	}
	return 0;
}