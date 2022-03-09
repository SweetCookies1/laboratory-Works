#include "mixedStringFromTwo.h"

void mixedStringFromTwo(char *s1, char *s2, char *stringWrite) {
    WordDescriptor word1, word2;
    bool isWord1, isWord2;
    char *beginSearch1 = s1,
    *beginSearch2 = s2;
    char *startWord = stringWrite;

    while (getWord(beginSearch1, &word1) || getWord(beginSearch2, &word2)) {
        isWord1 = getWord(beginSearch1, &word1);
        isWord2 = getWord(beginSearch2, &word2);
        if (isWord1) {
            startWord = copy(word1.begin, word1.end, startWord);
            *startWord++ = ' ';
            beginSearch1 = word1.end;
        }
        if (isWord2) {
            startWord = copy(word2.begin, word2.end, startWord);
            *startWord++ = ' ';
            beginSearch2 = word2.end;
        }
    }
    if (stringWrite != startWord)
        *--startWord = '\0';
}
