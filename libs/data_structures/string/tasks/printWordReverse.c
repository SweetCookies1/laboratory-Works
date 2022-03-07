#include "printWordReverse.h"

void printWord(WordDescriptor word) {
    char *endBuffer = copy(word.begin, word.end, _stringBuffer);
    *endBuffer = '\0';
    printf("%s", _stringBuffer);
}

void printWordsRevers(char *str) {
    BagOfWords word;
    getBagOfWords(&word, str);

    for (int i = word.size - 1; i >= 0; --i) {
        printWord(word.words[i]);
        printf("\n");
    }
}
