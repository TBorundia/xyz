#include<stdio.h>
#include"Array.h"

int main()
{
// Test Case 1
struct array a;
init(&a,20);

//Test case 2
create(&a);
print(a);

//Test case 3
int val=add(&a,-15);
if(val==-1)
{
printf("Capacity full: Element cannot be added!");
}
else
{
print(a);
}

//Test Case 4
int val1;
val1 = delete(&a,5);
if(val1==1)
{
print(a);
}
else
{
printf("Array index out of bound");
}

//Test Case 5
int val2;

val2 = delete(&a,12);
if(val2==1)
{
print(a);
}
else
{
printf("Array index out of bound");
}

//Test case 6
int val3;
val3=get(a,1);
printf("element: %d",val3);

//Test Case 7
struct array b;
copy(&b,a);
print(b);

//Test Case 8
struct array a1;
struct array a2;
struct array a3;
init(&a1,20);
create(&a1);
init(&a2,20);
create(&a2);
a3=merge(a1,a2);

printf("\nA1.arr[] = ");
print(a1);
printf("A2.arr[] = ");
print(a2);
printf("A3.arr[] = ");
print(a3);

//Test Case 9
int val4;
val4=linsearch(a,9);
if(val4!=0)
{
printf("found at index: %d",val4);
}
else{
printf("Element not found!");
}

//Test Case 10
int val5;
val5 = binsearch(a,20);
if(val5!=-1)
{
printf("found at index: %d",val5);
}
else{
printf("Key not found!");
}

//Test case 11
insert(&a,3,50);
print(a);

//Test Case 12
int val6;
val6 = length(a);
printf("Length of array: %d",val6);
return 0;
}