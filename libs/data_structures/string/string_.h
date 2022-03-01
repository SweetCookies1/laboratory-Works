#ifndef INC_STRING__H
#define INC_STRING__H

#include <stdio.h>
#include <memory.h>
#include <ctype.h>

#define MAX_STRING_SIZE 100
#define MAX_N_WORDS_IN_STRING 100
#define MAX_WORD_SIZE 20

char _stringBuffer[MAX_STRING_SIZE + 1];

typedef struct WordDescriptor {
    char *begin; // позиция начала слова
    char *end; // позиция первого символа, после последнего символа слова
} WordDescriptor;

size_t strlen(const char *begin);

char* find(char *begin, char *end, int ch);

char* findNonSpace(char *begin);

char* findSpace(char *begin);

char* findNonSpaceReverse(char *rBegin, const char *rEnd);

char* findSpaceReverse(char *rBegin, const char *rEnd);

int strcmp(const char *lhs, const char *rhs);

char* copy(const char *beginSource, const char *endSource, char *beginDestination);

char* copyIf(char *beginSource, const char *endSource, char *beginDestination, int (*f)(int));

char* copyIfReverse(char *rBeginSource, const char *rEndSource, char *beginDestination, int (*f)(int));

int getWord(char *beginSearch, WordDescriptor *word);

char *getEndOfString(char *s);

#endif
