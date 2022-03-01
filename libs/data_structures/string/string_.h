#ifndef INC_STRING__H
#define INC_STRING__H

#include <stdio.h>
#include <memory.h>
#include <ctype.h>

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

#endif
