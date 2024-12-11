#define MAX 50

struct array
{
    int capacity;
    int lastindex;
    char arr[MAX];
};

void init(struct array *x,int cap)
{
    x->lastindex=-1; 
    x->capacity=cap;
    printf("lastIndex = %d, Capacity = %d\n",x->lastindex,x->capacity);
}

void print(struct array x)
{
    int i;
    printf("[");
    for(i=0;i<=x.lastindex-1;i++)
    {
        printf("%c, ",x.arr[i]);
    }
    printf("%c",x.arr[x.lastindex]);
    printf("]\n");
}

// void create(struct array *x)
// {
//     char getInput(char[]);
//     char element = getInput("Enter a string : ");
//     do
//     {
//         if(add(x,element)==-1)
//         {
//             break;
//         }
//     }while(element!="#");
//     printf("Added to the array\n");
// }

char getInput(string message[])
{
    printf("%s",message);
}

int add(struct array *x,char element)
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

int nonRepeat(struct array *x){
    int n=x->lastindex;
    for(int i=0;i<=n-1;i++)
    {
        if(n==1)
        {
            break;
        }
        if(i==0)
        {
            if(x->arr[i]!=x->arr[i+1])
            {
                return i;
            }
        }
        else if(i==n-1)
        {
            if(x->arr[i]!=x->arr[i-1])
            {
                return i;
            }
        }
        else if(x->arr[i]!=x->arr[i+1] && x->arr[i]!=x->arr[i-1])
        {
            return i;
        }
        else{
            return -1;
        }
    }
}

// Given a string s, find the first non-repeating charcter in it and return its index. If its does not exist, return -1. Identify and use an appropriate data structure to solve the problem. using C