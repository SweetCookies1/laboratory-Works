#include "replaceWord.h"

void replace(char *source, char *w1, char *w2) {
    size_t w1Size = strlen_(w1);
    size_t w2Size = strlen_(w2);

    WordDescriptor word1 = {w1, w1 + w1Size};
    WordDescriptor word2 = {w2, w2 + w2Size};

    char *readPtr, *recPtr;
    if (w1Size >= w2Size) {
        readPtr = source;
        recPtr = source;
    } else {
        copy(source, getEndOfString(source), _stringBuffer);
        readPtr = _stringBuffer;
        recPtr = source;
    }

    WordDescriptor word;
    while (getWord(readPtr, &word)) {
        if (wordsEqual(word, word1)) {
            recPtr = copy(word2.begin, word2.end, recPtr);
        } else {
            recPtr = copy(word.begin, word.end, recPtr);
            *recPtr = ' ';
            recPtr++;
            readPtr = word.end;
        }
        *recPtr = '\0';
    }
}
