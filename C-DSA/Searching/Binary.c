#include <stdio.h>

int binarySearch(int arr[], int first, int last, int key) {
    while (first <= last) {
        int mid = first + (last - first) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1) {
        printf("Element %d found at %d\n", key, result);
    } else {
        printf("Element %d not found\n", key);
    }

    return 0;
}
