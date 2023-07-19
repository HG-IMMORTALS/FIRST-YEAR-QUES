#include <stdio.h>

void sortArray(int *arr, int size);

int main() {
    int size, i;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, size);

    printf("Array in sorted order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void sortArray(int *arr, int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}


/*Output:
Enter the number of elements in the array: 4
Enter elements in the array:
1 2 4 5
Array in sorted order:
1 2 4 5 
*/