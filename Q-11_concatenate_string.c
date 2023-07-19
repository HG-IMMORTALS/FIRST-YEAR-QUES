#include <stdio.h>
#include <string.h>

void stringConcatenate(char *s1, char *s2);

int main() {
    char s1[100], s2[100];

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);

    stringConcatenate(s1, s2);

    printf("Concatenated string: %s\n", s1);

    return 0;
}

void stringConcatenate(char *s1, char *s2) {
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if (s1[l1 - 1] == '\n') {
        s1[l1 - 1] = '\0';
    }

    if (s2[l2 - 1] == '\n') {
        s2[l2 - 1] = '\0';
    }

    strcat(s1, s2);
}

/*Output:
Enter the first string: Graphic 
Enter the second string: era
Concatenated string: Graphic era
*/