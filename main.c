#include <stdio.h>

int main(void) {
    char text[] = "i topi non avevano nipoti";

    char *start = text;
    char *end = text;

    while (*end != '\0') {
        end++;
    }
    end--;

    while (start <= end) {
        while (*start == ' ') start++;
        while (*end == ' ') end--;

        if (*start != *end) {
            printf("Stringa non palindroma");
            return 0;
        }

        start++;
        end--;
    }

    printf("Stringa palindroma");
    return 0;
}