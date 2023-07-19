#include <stdio.h>

void findAverage(float *arr, int size);

int main() {
    int size, i;
    float arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    findAverage(arr, size);

    return 0;
}

void findAverage(float *arr, int size) {
    float sum = 0.0, average;
    int i;

    for (i = 0; i < size; i++) {
        sum += *(arr + i);
    }

    average = sum / size;

    printf("Average = %.2f\n", average);
}

/*Output:
Enter the number of elements in the array: 5
Enter elements in the array:
1 2 3 4 5 
Average = 3.00
*/