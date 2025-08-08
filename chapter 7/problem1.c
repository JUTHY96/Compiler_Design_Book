#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Helper function to convert string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

int main() {
    char str[200], *token;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    toLowerCase(str); // Convert input to lowercase

    token = strtok(str, " ,.-\n");

    while (token != NULL) {
        if (strcmp(token, "the") == 0) {
            count++;
        }
        token = strtok(NULL, " ,.-\n");
    }

    printf("Number of occurrences of 'the': %d\n", count);
    return 0;
}
