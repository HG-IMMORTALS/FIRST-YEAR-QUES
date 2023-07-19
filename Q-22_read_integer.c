#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *vowelFile, *consonantFile, *digitFile, *specialCharFile;
    char character;

    inputFile = fopen("characters.txt", "w");

    if (inputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter characters (Enter '$' to stop):\n");
    while (1) {
        scanf(" %c", &character);

        if (character == '$') {
            break;
        }

        fprintf(inputFile, "%c", character);
    }

    fclose(inputFile);

    inputFile = fopen("characters.txt", "r");

    if (inputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    vowelFile = fopen("vowels.txt", "w");

    if (vowelFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    consonantFile = fopen("consonants.txt", "w");

    if (consonantFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    digitFile = fopen("digits.txt", "w");

    if (digitFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    specialCharFile = fopen("special_characters.txt", "w");

    if (specialCharFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fscanf(inputFile, "%c", &character) != EOF) {
        if (isalpha(character)) {
            character = toupper(character);

            if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
                fprintf(vowelFile, "%c ", character);
            } else {
                fprintf(consonantFile, "%c ", character);
            }
        } else if (isdigit(character)) {
            fprintf(digitFile, "%c ", character);
        } else {
            fprintf(specialCharFile, "%c ", character);
        }
    }

    fclose(inputFile);
    fclose(vowelFile);
    fclose(consonantFile);
    fclose(digitFile);
    fclose(specialCharFile);

    printf("Characters stored in vowel.txt, consonant.txt, digit.txt, and special_characters.txt files successfully.\n");

    return 0;
}

/*Output:
Enter characters (Enter '$' to stop):
1
2
@
d
.
g
$
Characters stored in vowel.txt, consonant.txt, digit.txt, and special_characters.txt files successfully.*/
