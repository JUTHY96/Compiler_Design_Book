#include <stdio.h>
#include <ctype.h>

int main() {
    char line[1000];
    int count = 0;

    printf("Enter text (end input with a blank line):\n");

    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '\n') break;

        for (int i = 0; line[i] != '\0'; i++) {
            char ch = tolower(line[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }
    }

    printf("Total vowels: %d\n", count);
    return 0;
}
