//WAP to find the second largest element in array.
#include <stdio.h>

int main() {
    int n,i;
    int arr[n];
    int l= arr[0], sl = -1;
    printf("Enter the elements: ");
    scanf("%d", &n);

    
    if (n < 2) {
        printf("Array must have at least two elements to find the second largest.\n");
        return 0;
    }

    
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    

    
    for ( i = 1; i < n; i++) {
        if (arr[i] > l) {
            sl = l;
            l = arr[i];
        } else if (arr[i] > sl && arr[i] != l) {
            sl = arr[i];
        }
    }
    if (sl != -1) {
        printf("The second largest element is: %d\n", sl);
    } else {
        printf(" no second largest element found.\n");
    }

    return 0;
}

