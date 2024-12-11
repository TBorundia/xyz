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

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nUsing Merge Sort:\n");
    merge_sort(arr, 0, n - 1);
    printf("Sorted array using Merge Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nUsing Quick Sort:\n");
    quick_sort(arr, 0, n - 1);
    printf("Sorted array using Quick Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nUsing Bubble Sort:\n");
    bubble_sort(arr, n);
    printf("Sorted array using Bubble Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nUsing Selection Sort:\n");
    selection_sort(arr, n);
    printf("Sorted array using Selection Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nUsing Insertion Sort:\n");
    insertion_sort(arr, n);
    printf("Sorted array using Insertion Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
