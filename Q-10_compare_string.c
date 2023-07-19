#include <stdio.h>
#include <string.h>

int stringCompare(char *s1, char *s2);

int main() {
    char s1[100], s2[100];

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);

    int res = stringCompare(s1, s2);

    if (res == 0) {
        printf("Strings are equal.\n");
    } else if (res < 0) {
        printf("String 1 is smaller than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }

    return 0;
}

int stringCompare(char *s1, char *s2) {
    return strcmp(s1, s2);
}

/*Output:
Enter the first string: Graphic
Enter the second string: Era
String 1 is greater than String 2.
*/
