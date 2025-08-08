#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[500];
    int i = 0, c;

    printf("Enter your text (press Enter twice to finish):\n");

    while ((c = getchar()) != EOF) {
        if (c == '\n' && ((c = getchar()) == '\n' || c == EOF)) break;
        str[i++] = c;
    }
    str[i] = '\0';

    char *token = strtok(str, " \n");

    printf("Words starting with capital letters:\n");
    while (token != NULL) {
        if (isupper(token[0]))
            printf("%s\n", token);
        token = strtok(NULL, " \n");
    }

    return 0;
}
