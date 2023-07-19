#include <stdio.h>
#include <ctype.h>

void countVowelsConsonants(char *str, int *vowel, int *consonant);

int main() {
    char str[100];
    int vowel = 0, consonant = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countVowelsConsonants(str, &vowel, &consonant);

    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d\n", consonant);

    return 0;
}

void countVowelsConsonants(char *str, int *vowel, int *consonant) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowel)++;
            } else {
                (*consonant)++;
            }
        }
    }
}


/*Output:
Enter a string: Graphic
Number of vowels: 2
Number of consonants: 5
*/