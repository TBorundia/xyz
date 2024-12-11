#include<stdio.h>
#include<string.h>
#include"Que.h"

int main(){
    struct array a;
    init(&a,20);
    create(&a);
    print(a);

    // char val=add(&a,"a");
    // if(val==-1)
    // {
    //     printf("Capacity full: Element cannot be added!");
    // }
    // else
    // {
    //     print(a);
    // }
    int NON=nonRepeat(&a);
    if(NON==-1)
    {
        printf("Repeated\n");
    }
    else{
        printf("Non repeating character is at index : %d",NON);
    }
    return 0;
}