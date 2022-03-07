#include "../string_.h"

void reverseString(char *str) {
    if (*str == '\0')
        return;

    char *endBuffer = copy(str, getEndOfString(str), _stringBuffer);

    WordDescriptor w;

    while (getWordReverse(endBuffer - 1, _stringBuffer - 1, &w)) {
        str = copy(w.begin, w.end, str);
        *str++ = ' ';

        endBuffer = w.begin;
    }

    *(str - 1) = '\0';
}
