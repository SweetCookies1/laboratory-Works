#include "reverseWord.h"

int true(int num) {
    return 1;
}

void reverseWord(WordDescriptor word) {
    char *endBuffer = copyIfReverse(word.end - 1,word.begin - 1, _stringBuffer,true);
    copy(_stringBuffer, endBuffer, word.begin);
}