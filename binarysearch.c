//WAP of binary search.
#include <stdio.h>

int binarySearch(int arr[], int size, int n) 
 {
    int low = 0;
    int high = size - 1;
    
    while (low <= high)
	 {
        int mid = low + (high - low) / 2;
        
    
        if (arr[mid] == n) {
            return mid; 
        }
        
        
        if (arr[mid] < n) {
            low = mid + 1;
        }
        
        else {
            high = mid - 1;
        }
    }
    

    return -1;
}

int main() {
    
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int n;
    printf("Enter the number to search: ");
    scanf("%d", &n);
    
    int result = binarySearch(arr, size,n);
    
    if (result != -1) {
        printf("Element found %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
    
    return 0;
}

