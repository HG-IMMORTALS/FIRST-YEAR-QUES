#include <stdio.h>

int main() {
    FILE *inputFile, *evenFile, *oddFile;
    int number;

    inputFile = fopen("numbers.txt", "w");

    if (inputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter integers (Enter -1 to stop):\n");
    while (1) {
        scanf("%d", &number);

        if (number == -1) {
            break;
        }

        fprintf(inputFile, "%d ", number);
    }

    fclose(inputFile);

    inputFile = fopen("numbers.txt", "r");

    if (inputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    evenFile = fopen("even.dat", "w");

    if (evenFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    oddFile = fopen("odd.dat", "w");

    if (oddFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fscanf(inputFile, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenFile, "%d ", number);
        } else {
            fprintf(oddFile, "%d ", number);
        }
    }

    fclose(inputFile);
    fclose(evenFile);
    fclose(oddFile);

    printf("Integers stored in even.dat and odd.dat files successfully.\n");

    return 0;
}

/*Output:
Enter integers (Enter -1 to stop):
1
2
3
4
5
-1
Integers stored in even.dat and odd.dat files successfully.
*/