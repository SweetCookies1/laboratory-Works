#include "lastWordFIrstStringInSecondString.h"

bool lastWordInFirstStringInSecondString(char *str1, char *str2, WordDescriptor *word) {
    if (!(*str1))
        return false;

    getBagOfWords(&_bag, str2);

    WordDescriptor currentWord;
    char *end = getEndOfString(str1);
    while (getWordReverse(end - 1, str1 - 1, &currentWord)) {
        if (findWordInBag(&_bag, currentWord) != -1) {
            *word = currentWord;
            return true;
        }

        end = currentWord.begin;
    }

    return false;
}
