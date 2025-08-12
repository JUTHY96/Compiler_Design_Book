#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[1000];
    int i = 0, words = 0, inWord = 0;

    printf("Enter a line of text:\n");
    fgets(line, sizeof(line), stdin);

    while (line[i] != '\0') {
        if (isspace(line[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
        i++;
    }

    printf("Total words: %d\n", words);
    return 0;
}


