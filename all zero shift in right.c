#include <stdio.h>


void moveZerosToEnd(int *arr, int size) 
{
    int nonZeroIndex = 0;
    for (int i = 0; i < size; i++)
     {
        
        if (arr[i] != 0)
         {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    for (int i = nonZeroIndex; i < size; i++) 
    {
        arr[i] = 0;
    }
}

int main() {
    int arr[] = {2, 5, 7, 0, 4, 0, 7, 5, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    printf("The given array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    moveZerosToEnd(arr, n);
    printf("The new array is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}