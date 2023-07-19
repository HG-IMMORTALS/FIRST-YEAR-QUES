#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char character;

    inputFile = fopen("alphabets.txt", "w");

    if (inputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter alphabets (Enter '!' to stop):\n");
    while (1) {
        scanf(" %c", &character);

        if (character == '!') {
            break;
        }

        fprintf(inputFile, "%c", character);
    }

    fclose(inputFile);

    inputFile = fopen("alphabets.txt", "r");

    if (inputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    outputFile = fopen("uppercase.txt", "w");

    if (outputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fscanf(inputFile, "%c", &character) != EOF) {
        if (isalpha(character)) {
            character = toupper(character);
        }
        fprintf(outputFile, "%c", character);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Alphabets stored in uppercase.txt file successfully.\n");

    return 0;
}

/*Output:
Enter alphabets (Enter '!' to stop):
A
b 
c
D
E
!
Alphabets stored in uppercase.txt file successfully.
*/