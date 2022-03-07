#include "digitsToEndReverse.h"

void digitToEnd(WordDescriptor word) {
    char *endStringBuffer = copy(word.begin, word.end, _stringBuffer);
    char *recPosition = copyIf(_stringBuffer, endStringBuffer, word.begin, isalpha);

    copyIfReverse(endStringBuffer - 1, _stringBuffer - 1, recPosition, isdigit);
}

void digitToEndReverse(char *str) {
    char *beginStr = str;
    WordDescriptor word;

    while (getWord(beginStr, &word)) {
        digitToEnd(word);
        beginStr = word.end;
    }
}
