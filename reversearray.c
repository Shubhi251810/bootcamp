//WAP to reverse an array.
#include<stdio.h>

void reverseArray(int arr[], int size)
 {
    int start = 0, end = size - 1, temp;
    
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

	

