#include<stdio.h>
#define MAX 50
void linsearch(int [],int ,int);
void merge_sort(int [],int,int );
void merge(int[],int,int,int);
int partition(int[],int,int);
void quick_sort(int[],int,int);
void printArray(int[],int);
void selection_sort(int[],int);
void insertion_sort(int[],int);
void bubble_sort(int[],int);
int binsearch(int [],int,int);

int main(){
    int choice1,choice2,a[MAX],n;
       int x;
    char c='y';
    printf("Enter size of the array");
    scanf("%d",&n);
    printf("\nENter array elements");
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    while(c=='y'){
        fflush(stdin);
    printf("What do you prefer 1.Searching\n 2.Sorting\n");
    scanf("%d",&choice1);
    if(choice1==1){
        printf("1.Linear Search\n 2.Binary Search");
        scanf("%d",&choice2);
        int key;
        printf("Enter key to find");
        scanf("%d",&key);
        switch (choice2)
        {
        case 1:
            linsearch(a,n,key);
            break;
        case 2:
         
             x= binsearch(a,n,key);
            printf("Key found @ %d",x);
            
            break;
        default:
            break;
        }
    }
    else if(choice1==2){
        printf("1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Merge Sort\n5.Quick Sort");
        scanf("%d",&choice2);
        switch (choice2)
        {
        case 1:
            bubble_sort(a,n);
            printArray(a,n);
            break;
        case 2:
           selection_sort(a,n);
            printArray(a,n);
            break;
        case 3:
            insertion_sort(a,n);
            printArray(a,n);
            break;
        case 4:
            merge_sort(a,0,n);
            printArray(a,n);
            break;
        case 5:
            quick_sort(a,0,n);
            printArray(a,n);
            break;

        

        default:
            break;
        }
    }
    printf("\nDo You Want to Continue [y/n]");
    fflush(stdin);
    scanf("%c",&c);
    }
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}

void linsearch(int a[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("Element %d found at %d",a[i],i);
            break;
        }
    }

}

int binsearch(int a[],int n,int key){
    int l=0,h,mid;
    h=n;
    while(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key>a[mid]){
            l=(mid+1);
        }   
        else{
            h=(mid-1);
        }

    }
    return -1;

}

void merge(int a[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int l[n1], r[n2];//declaeration of arrays.

    for (i = 0; i < n1; i++) {
        l[i] = a[left + i];
    }
    for (j = 0; j < n2; j++) {
        r[j] = a[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left; 

    while (i < n1 && j < n2) {
        if (l[i] <= r[j]) {
            a[k] = l[i];
            i++;
        } else {
            a[k] = r[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = l[i];
        i++;
        k++;
    }
    while (j < n2) {
        a[k] = r[j];
        j++;
        k++;
    }
}


void merge_sort(int a[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        merge_sort(a,left,mid);
        merge_sort(a,mid+1,right);

        merge(a,left,mid,right);

    }
}

void quick_sort(int a[],int p,int r){
    if(p<r){
        int q=partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }

}

int partition(int a[],int p,int r){
    int pivot=a[r];
    int i=p-1;
    int temp,j;
    for(j=p;j<=r-1;j++){
        if(a[j]<pivot){
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }

    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return i+1;

}

void bubble_sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
}


void selection_sort(int a[],int n){
    int i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<min){
                min=j;
            }
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}

void insertion_sort(int a[],int n){
    int i,key,j;
    for(j=1;j<n;j++){
        key=a[j];
        i=j-1;
        while(i>0 && a[i]>key){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
}