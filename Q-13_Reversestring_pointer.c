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
    int length = strlen(str);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
    }
}

/*Output:
Enter a string: Graphic
Reversed string:
cihparG
*/