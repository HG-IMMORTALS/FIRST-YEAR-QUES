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
    while (*s != '\0') {
        *d = *s;
        s++;
        d++;
    }

    *d = '\0';
}

/*Output:
Enter a string: Graphic 
Copied string: Graphic
*/