#include "lexicographicOrderingWord.h"

bool wordOrdered(char *str) {
    WordDescriptor word1;
    WordDescriptor word2;

    if (!getWord(str, &word1))
        return true;

    while (getWord(str, &word2)) {
        if (!wordsEqual(word1, word2) && strcmp(word1.begin, word2.begin) > 0)
            return false;

        word1 = word2;
        str = word2.end;
    }
    return true;
}
