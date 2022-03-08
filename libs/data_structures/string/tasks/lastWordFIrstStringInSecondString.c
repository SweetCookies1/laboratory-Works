#include "lastWordFIrstStringInSecondString.h"

void lastWordInFirstStringInSecondString(char *str1, char *str2) {
    getBagOfWords(&_bag, str2);

    WordDescriptor currentWord;
    char *end = getEndOfString(str1);
    while (getWordReverse(end - 1, str1 - 1, &currentWord)) {
        if (findWordInBag(&_bag, currentWord) != -1) {
            printWord(currentWord);
            return;
        }

        end = currentWord.begin;
    }
}
