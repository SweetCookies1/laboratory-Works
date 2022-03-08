#include "mixedStringFromTwo.h"

void mixedStringFromTwo(char *s1, char *s2, char *stringWrite) {
    WordDescriptor word1, word2;
    bool isW1Found, isW2Found;
    char *beginSearch1 = s1, *beginSearch2 = s2;
    char *startWord = stringWrite;
    while ((isW1Found = getWord(beginSearch1, &word1)),
            (isW2Found = getWord(beginSearch2, &word2)), isW1Found || isW2Found) {
        if (isW1Found) {
            startWord = copy(word1.begin, word1.end, startWord);
            *(startWord++) = ' ';
            beginSearch1 = word1.end;
        }
        if (isW2Found) {
            startWord = copy(word2.begin, word2.end, startWord);
            *(startWord++) = ' ';
            beginSearch2 = word2.end;
        }
    }
    if (stringWrite != startWord)
        *(--startWord) = '\0';
}
