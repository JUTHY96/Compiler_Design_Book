#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 1000

int main() {
    char str[MAX];
    int freq[26] = {0};
    int i = 0, max_freq = 0;
    char most_freq_char = '\0';

    printf("Enter a string:\n");
    fgets(str, MAX, stdin);

    while (str[i]) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            freq[ch - 'a']++;
        }
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_freq_char = i + 'a';
        }
    }

    if (max_freq > 0)
        printf("Most frequent character: '%c' with frequency %d\n", most_freq_char, max_freq);
    else
        printf("No alphabetic characters found.\n");

    return 0;
}
