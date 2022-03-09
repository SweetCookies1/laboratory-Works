#include "removeNonLetters.h"

void removeNonLetters(char *s) {
    char *endSource = getEndOfString(s);
    char *destination = copyIf(s, endSource, s, isgraph);
    *destination = '\0';
}

bool bagContainsWord(BagOfWords *bag, WordDescriptor word) {
    return findWordInBag(bag, word) != -1;
}

