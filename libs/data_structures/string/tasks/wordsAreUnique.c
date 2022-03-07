#include "wordsAreUnique.h"

bool wordsAreUnique(char *str) {
    getBagOfWords(&_bag, str);

    WordDescriptor *curWord = _bag.words;
    WordDescriptor *endWord = _bag.words + _bag.size - 1;

    while (curWord < endWord) {
        WordDescriptor *word = curWord + 1;
        while (word <= endWord) {
            if (wordsEqual(*curWord, *word))
                return false;

            word++;
        }
        curWord++;
    }
    return true;
}