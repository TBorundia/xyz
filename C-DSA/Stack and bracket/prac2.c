#include<stdio.h>
#include"Stack.h"

int main()
{ 
// Test Case 1 and 2
char str[]="[{()}]";

struct stack s;
createStack(&s,50);
int i=0,val1;
while(str[i]!='\0')
{
val1=push(&s,str[i]);
i++;
}
printf("Given expression added to the stack : %s\n",str);
// Test Case 3
int val2;
val2=push(&s,'}');
printf("Stack contents : [{()}]}\n");
// Test Case 4
int data;
data=pop(&s);
printf("Stack top content : %c\n",data);
// Test Case 5
struct stack s1;
createStack(&s1,50);
int val3;
val3=isBalancedExpression(&s1,"{[()]}");
if(val3==1)
{
printf("Valid Expression!\n");
}
else
{
printf("Invalid Expression!\n");
}
return 0;
}