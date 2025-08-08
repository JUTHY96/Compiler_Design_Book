#include <stdio.h>
#include <string.h>

int main() {
    char str[200], *token;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    token = strtok(str, " ,.-\n");

    printf("Words in the sentence:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,.-\n");
    }

    return 0;
}
