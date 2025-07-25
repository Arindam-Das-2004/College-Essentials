// 20.	Write programs in C to compare string matching using the
//  naive algorithm 
#include <stdio.h>
#include <string.h>

void naiveSearch(char* text, char* pattern) {
    int n = strlen(text);
    int m = strlen(pattern);
    int found = 0;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m) {
            printf("Pattern found at index %d\n", i);
            found = 1;
        }
    }

    if (!found)
        printf("Pattern not found\n");
}

int main() {
    char text[100], pattern[100];

    printf("Enter the text: ");
    gets(text);
    printf("Enter the pattern: ");
    gets(pattern);

    printf("\nNaive Pattern Matching:\n");
    naiveSearch(text, pattern);

    return 0;
}
