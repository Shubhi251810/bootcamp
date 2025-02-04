//write a program to check if an array is sorted.
#include <stdio.h>

int isSorted(int arr[], int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (isSorted(arr, n)) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }
    
    return 0;
}

