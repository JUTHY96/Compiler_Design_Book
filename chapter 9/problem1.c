#include <stdio.h>
#include <ctype.h>

#define MAX 1000

int main() {
    char str[MAX];
    int i = 0, word_count = 0;
    int in_word = 0;

    printf("Enter a sentence:\n");
    fgets(str, MAX, stdin);

    while (str[i]) {
        if (isalpha(str[i])) {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
        i++;
    }

    printf("Total words: %d\n", word_count);
    return 0;
}
