#include <stdio.h>

void stringConcatenate(char *str1, char *str2);

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    stringConcatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}

void stringConcatenate(char *str1, char *str2) {
    while (*str1)
        str1++;

    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}


/*Output:
Enter the first string: grahic era
Enter the second string: hill university
Concatenated string: grahic era
hill university
*/
