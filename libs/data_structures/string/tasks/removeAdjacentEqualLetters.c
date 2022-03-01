#include "removeAdjacentEqualLetters.h"

void removeAdjacentEqualLetters(char *s) {
    if (*s == '\0')
        return;

    char *lastWriten = s;
    s++;
    while (*s) {
        if (*lastWriten != *s) {
            lastWriten++;
            memcpy(lastWriten, s, sizeof(char));
        }
        s++;
    }
    lastWriten++;
}
