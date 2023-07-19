#include <stdio.h>

int searchElement(int *arr, int size, int key);

int main() {
    int size, i, key;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int foundIndex = searchElement(arr, size, key);

    if (foundIndex != -1) {
        printf("Element %d found at index %d\n", key, foundIndex);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

int searchElement(int *arr, int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (*(arr + i) == key) {
            return i;
        }
    }
    return -1;
}

/*Output:
Enter the number of elements in the array: 4
Enter elements in the array:
2 14 5 6
Enter the element to search: 4
Element not found in the array
*/