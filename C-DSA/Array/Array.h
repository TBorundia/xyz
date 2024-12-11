#define MAX 50

struct array
{
    int capacity;
    int lastindex;
    int arr[MAX];
};

void init(struct array *x,int cap)
{
    x->lastindex=-1; //Arrow operator is used to access a structure element by pointer
    x->capacity=cap;
    printf("Array with lastIndex = %d, Capacity = %d\n",x->lastindex,x->capacity);
}

int add(struct array *x,int element)
{
    int isFull(struct array);
    if(isFull(*x))
    {
        return -1;

    }
    else
    {
        (x->lastindex++);
        x->arr[x->lastindex]=element;
        return 1;
    }
}

int isFull(struct array x)
{
    if(x.lastindex==x.capacity-1)
    {
        return 1;
    }
    return 0;
}

void print(struct array x)
{
    int i;
    printf("[");
    for(i=0;i<=x.lastindex-1;i++)
    {
        printf("%d, ",x.arr[i]);
    }
    printf("%d",x.arr[x.lastindex]);
    printf("]\n");
}

void create(struct array *x)
{
    int getInput(char[]);
    int element = getInput("Enter a no : Enter 999 to stop");
    do
    {
        if(add(x,element)==-1)
        {
            break;
        }
    element = getInput("Enter a no : Enter 999 to stop");
    }while(element!=999);
    printf("Following elements added to the array\n");
}

int getInput(char message[])
{
    printf("%s",message);
    int n;
    scanf("%d",&n);
    return n;
}

int delete(struct array *x,int indexno)
{
    int i;
    if(indexno<0 || indexno>x->lastindex)
    {
        return -1;
    }
    else
    {
        for(i=indexno;i<=x->lastindex-1;i++)
        {
            x->arr[i]=x->arr[i+1];
        }
        x->lastindex--;
        return 1;
    }
}

void copy(struct array *y,struct array x)
{
int i;
y->lastindex=x.lastindex;
y->capacity=x.capacity;
for(i=0;i<=x.lastindex;i++)
{

y->arr[i]=x.arr[i];
}
printf("Contents of array 2 :\n");
printf("Array with lastIndex = %d, Capacity = %d\n",y->lastindex,y->capacity);
}

void insert(struct array *x,int indexno,int element)
{
int i;
if(x->lastindex+1>x->capacity)
{
printf("Array index out of bound");
}
else
{
for(i=x->lastindex+1;i>=indexno+1;i--)
{
x->arr[i]=x->arr[i-1];
}
x->arr[indexno]=element;
x->lastindex++;
}

}

int get(struct array x,int indexno)
{
if(indexno>x.lastindex)
{

printf("Array index out of bound");
return 0;
}
else{
return x.arr[indexno];
}
}

void sort(struct array *x)
{
int i,j,temp;
for(i=0;i<=x->lastindex-1;i++)
{
for(j=i+1;j<=x->lastindex;j++)
{
if(x->arr[i]>x->arr[j])
{
temp=x->arr[i];
x->arr[i]=x->arr[j];
x->arr[j]=temp;
}
}
}
}

int linsearch (struct array x,int element)
{
int i,flag=0;
for(i=0;i<=x.lastindex;i++)

{
if(x.arr[i]==element)
{
flag=i;
break;
}
}
if(flag==0)
{
return 0;
}
else{
return flag;
}
}

struct array merge(struct array x,struct array y)
{
struct array z;
int i,j;
void sort(struct array*);
z.capacity = x.capacity+y.capacity;
z.lastindex= x.lastindex+y.lastindex+1;
for(i=0;i<=x.lastindex;i++)
{
z.arr[i]=x.arr[i];
}
for(i=x.lastindex+1,j=0;i<=z.lastindex,j<=y.lastindex;i++,j++)

{
z.arr[i]=y.arr[j];
}
sort(&z);
return z;
}

int length(struct array x)
{
int i,count=0;
for(i=0;i<=x.lastindex;i++)
{
count++;
}
return count;
}

int binsearch(struct array x,int key)
{
int l=0,u=x.lastindex,mid,flag=0;
void sort(struct array*);
sort(&x);
while(l<=u)
{
mid=(l+u)/2;
if(x.arr[mid]==key)
{
flag=mid;
break;

}
else if(key>x.arr[mid])
{
l=mid+1;
}
else if(key<x.arr[mid])
{
u=mid-1;
}
}
if(flag==0)
{
return -1;
}
else{
return flag;
}
}