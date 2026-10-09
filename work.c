#include <stdio.h>

//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

int main() {
    int n, i, pos, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n + 1]; // Create an array with one extra space for the new element
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to insert the new element (1 to %d): ", n + 1);
    scanf("%d", &pos);
    
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    // Shift elements to the right to make space for the new element
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element at the specified position
    arr[pos - 1] = element;
    
    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}


//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

int main() {
    int n, i, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; // Create an array of size n
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);
    
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }
    
    // Shift elements to the left to remove the element at the specified position
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    printf("Array after deletion: ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}