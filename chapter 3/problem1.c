#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int i = 0, single = 0, multi = 0;

    printf("Enter the C-style code (end input with $):\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == '/' && str[i + 1] == '/') {
            single++;
            while (str[i] != '\n' && str[i] != '\0') 
           i++;
        } 
  else if (str[i] == '/' && str[i + 1] == '*') 
{
            multi++;
            i += 2;
            while (!(str[i] == '*' && str[i + 1] == '/') && str[i] != '\0') i++;
            i++; // skip '/'
        }
        i++;
    }
    printf("Single-line comments: %d\n", single);
    printf("Multi-line comments: %d\n", multi);
    printf("Total comments: %d\n", single + multi);
    return 0;
}
