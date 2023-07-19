#include <stdio.h>

void stringCopy(char *s, char *d);

int main() {
    char s[100], d[100];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    stringCopy(s, d);

    printf("Copied string: %s\n", d);

    return 0;
}

void stringCopy(char *s, char *d) {
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        d[i] = s[i];
    }

    d[i] = '\0';
}

/*Output:
Enter a string: Graphic
Copied string: Graphic
*/