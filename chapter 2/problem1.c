#include <stdio.h>

int main() {
    int c, lines = 1, prev = 0;

    printf("Enter your text (press Enter twice to finish):\n");

    while ((c = getchar()) != EOF) {
        if (c == '\n' && prev == '\n') break;
        if (c == '\n') lines++;
        prev = c;
    }

    printf("Total lines: %d\n", lines);
    return 0;
}
