#include <stdio.h>
#include <ctype.h>

void checkCharacters(char *str);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    checkCharacters(str);

    return 0;
}

void checkCharacters(char *str) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (isupper(ch)) {
            printf("%c is an uppercase character.\n", ch);
        } else if (islower(ch)) {
            printf("%c is a lowercase character.\n", ch);
        } else if (isdigit(ch)) {
            printf("%c is a digit.\n", ch);
        } else {
            printf("%c is a special character.\n", ch);
        }
    }
}

/*Output:
Enter a string: 12Gd@
1 is a digit.
2 is a digit.
G is an uppercase character.
d is a lowercase character.
@ is a special character.
*/