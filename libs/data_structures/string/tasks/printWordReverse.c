#include "printWordReverse.h"

void printWord(WordDescriptor word) {
    char *endWord = word.end;
    for (char *startWord = word.begin; startWord < endWord; startWord++)
        printf("%c", *startWord);
    printf("\n");
}

void printWordsInReverseOrder(char *s) {
    getBagOfWords(&_bag, s);

    WordDescriptor *endWord = _bag.words;
    for (WordDescriptor *startWord = _bag.words + _bag.size - 1; startWord >= endWord; startWord--)
        printWord(*startWord);
}

