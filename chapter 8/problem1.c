#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        i++;
    }
    printf("Length of string is %d\n", i);
    return 0;
}
