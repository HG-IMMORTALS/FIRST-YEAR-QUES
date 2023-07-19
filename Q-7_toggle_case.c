#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toggleCase(str);

    printf("Toggled string: %s\n", str);

    return 0;
}

void toggleCase(char *str) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

/*Output:
Enter a string: toogling
Toggled string: TOOGLING

Enter a string: TOGGLE
Toggled string: toggle
*/