#include "reverseString.h"

void reverseString(char *str) {
    if (*str == '\0')
        return;

    char *endBuffer = copy(str, getEndOfString(str), _stringBuffer);
    WordDescriptor word;
    while (getWordRevers(endBuffer - 1, _stringBuffer - 1, &word)) {
        str = copy(word.begin, word.end, str);
        *(str++) = ' ';

        endBuffer = word.begin;
    }
    *(--str) = '\0';
}
