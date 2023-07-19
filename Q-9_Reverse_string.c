#include <stdio.h>
#include <string.h>

void stringReverse(char *str);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    stringReverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

void stringReverse(char *str) {
    int i, j;
    char temp;

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

/*Output:
Enter a string: graphic
Reversed string: cihparg
*/