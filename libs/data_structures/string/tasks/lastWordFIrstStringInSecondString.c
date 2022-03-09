#include "lastWordFIrstStringInSecondString.h"

bool lastWordInFirstStringInSecondString(char *str1, char *str2, WordDescriptor *w) {

    getBagOfWords(&_bag, str2);
    char *endStr1 = getEndOfString(str1);

    WordDescriptor lastWord;
    while (getWordRevers(endStr1 - 1, str1 - 1, &lastWord)) {
        if (findWordInBag(&_bag, lastWord) != -1) {
                *w = lastWord;
                return true;
            }
        endStr1 = lastWord.begin;
        }
    return false;
}
