#include "removeAdjacentEqualLetters.h"

void removeAdjacentEqualLetters(char *s) {
    if (*s == '\0')
        return;

    char *lastWriten = s;
    while (*s) {
        if (*lastWriten != *s) {
            *(++lastWriten) = *s;
        }
        s++;
    }
    *(++lastWriten) = '\0';
}
