# define MAX 50
# include<stdio.h>
# include"string.h"
struct stack
{
int capacity;
char stk[MAX];
int top;
};

void createStack(struct stack *x,int capacity)
{
x->top=-1;
x->capacity=capacity;
printf("Stack with top = %d\n",x->top);
printf("Capacity = %d\n",x->capacity);
}

int isFull(struct stack x)
{
if(x.top==x.capacity-1)
{
return 1;
}
else
{
return 0;
}
}
int push(struct stack *x,char element)
{

if(isFull(*x))
{
printf("Stack Overflow!");
return -1;
}
else
{
(x->top)++;
x->stk[x->top]=element;
return 1;
}
}

int isEmpty(struct stack x)
{
if(x.top==-1)
{
return 1;
}
else
{
return 0;
}
}

/*void bulkPush(struct stack *x)
{
char getInput(char[]);
char element=getInput("Enter the element (enter o to stop)");
do
{
if(push(x,element)==-1)
{
break;
}
element=getInput("Enter the element (enter o to stop)");
}
while(element!='o');
printf("Following elements pushed to the stack\n");
}

char getInput(char message[])
{
printf("%s",message);
char n;
scanf("%c",&n);
return n;
}*/

char pop(struct stack *x)
{
char data=-1;
if(isEmpty(*x)==1)
{
printf("Stack Underflow!");
return -1;
}
else
{
data=x->stk[x->top];
(x->top)--;
}
return data;
}

char peek(struct stack x)
{
if(isEmpty(x)==1)
{
printf("Stack Underflow!");
return -1;
}
else
{
return x.stk[x.top];
}
}

int isOpeningBracket(char x)
{
switch(x)
{
case '[':
case '{':
case '(':
return 1;
default:
return 0;

}
}

int isClosingBracket(char x)
{
switch(x)
{
case ']':
case '}':
case ')':
return 1;
default:
return 0;

}
}
int match(char x,char y)
{
if((x=='['&&y==']')||(x=='{'&&y=='}')||(x=='('&&y==')'))
{
return 1;
}
else
{
return 0;
}
}

int isBalancedExpression(struct stack *x,char exp[])
{
int i=0;
while(exp[i]!='\0')
{
if(isOpeningBracket(exp[i]))
{
push(x,exp[i]);
i++;
}
else if(isClosingBracket(exp[i]))
{
char data=pop(x);
int val2;
val2=match(data,exp[i]);
if(val2==1)
{
i++;
}
else
{
return 0;
}
}
else{
i++;
}
}
if(isEmpty(*x))
{
return 1;
}
else
{
return 0;
}
}