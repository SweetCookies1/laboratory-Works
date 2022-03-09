#ifndef NEW_PROJECT_STRING__H
#define NEW_PROJECT_STRING__H

#include <ctype.h>
#include <memory.h>
#include <stdbool.h>

#define MAX_STRING_SIZE 100
#define MAX_N_WORDS_IN_STRING 100
#define MAX_WORD_SIZE 20

char _stringBuffer[MAX_STRING_SIZE + 1];

typedef struct WordDescriptor {
    char *begin;
    char *end;
} WordDescriptor;

typedef struct BagOfWords {
    WordDescriptor words[MAX_N_WORDS_IN_STRING];
    size_t size;
} BagOfWords;

BagOfWords _bag;
BagOfWords _bag2;

typedef enum WordBeforeFirstWordWithAReturnCode {
    FIRST_WORD_WITH_A,
    NOT_FOUND_A_WORD_WITH_A,
    WORD_FOUND,
    EMPTY_STRING
} WordBeforeFirstWordWithAReturnCode;

size_t strlen_(const char *begin);

char *find(char *begin, char *end, int ch);

char *findNonSpace(char *begin);

char *findSpace(char *begin);

char *findNonSpaceReverse(char *rbegin, const char *rend);

char *findSpaceReverse(char *rbegin, const char *rend);

int strcmp(const char *lhs, const char *rhs);

char *copy(const char *beginSource, const char *endSource, char *beginDestination);

char *copyIf(char *beginSource, const char *endSource,char *beginDestination, int (*f)(int));

char *copyIfReverse(char *rbeginSource, const char *rendSource, char *beginDestination, int (*f)(int));

char *getEndOfString(char *str);

int getWord(char *beginSearch, WordDescriptor *word);

int getWordRevers(char *rbegin, char *rend, WordDescriptor *word);

char *findComma(char *begin);

int getWordSeparatedComma(char *beginSearch, WordDescriptor *word);

void getBagOfWords(BagOfWords *bag, char *s);

void wordDescriptorDoString(WordDescriptor word, char* destination);

bool getWordReverse(char *rbegin, char *rend, WordDescriptor *word);

int wordsEqual(WordDescriptor w1, WordDescriptor w2);

int findWordInBag(BagOfWords *bag, WordDescriptor word);

int wordcmp(WordDescriptor w1, WordDescriptor w2);

#endif
