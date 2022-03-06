#include "reverseWord.h"

int true1(int num) {
    return 1;
}

/*
void reverseWord(WordDescriptor word) {
    char *endStringBuffer = copy(word.begin, word.end, _stringBuffer);
    copyIfReverse(endStringBuffer - 1, _stringBuffer, word.begin, true1);
}
 */

void reverseWordsInString(char *s) {
    char *beginSearch = findNonSpace(s);
    WordDescriptor word;

    while (getWord(beginSearch, &word)) {
        reverseWord(word);
        beginSearch = word.end;
    }
}