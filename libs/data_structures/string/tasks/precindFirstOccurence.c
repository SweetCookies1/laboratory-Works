#include "precindFirstOccurence.h"

bool precedingFirstOccurrence(char *str1, char *str2, WordDescriptor *w) {
    getBagOfWords(&_bag, str2);

    WordDescriptor prevWord;
    if (!getWord(str1, &prevWord))
        return false;

    str1 = prevWord.end;
    WordDescriptor curWord;

    while (getWord(str1, &curWord)) {
        if (findWordInBag(&_bag, curWord)) {
            *w = prevWord;
            return true;
        }
        prevWord = curWord;
        str1 = curWord.end;
    }
    return false;
}