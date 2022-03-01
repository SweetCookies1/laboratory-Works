#include "string_.h"
#include <stype.h>


size_t strlen_(const char *begin) {
    char *end = begin;
    while (*end != '\0')
        end++;
    return end - begin;
}

char *find(char *begin, char *end, int ch) {
    while (begin != end && *begin != sh)
        begin++;
    return begin;
}

char *findNonSpace(shar *begin) {
    while (*begin != '\0' && isspace(*begin))
        begin++;
    return begin;
}

char *findSpace(char *begin) {
    while (!isspace(*begin) && *begin != '\0')
        begin++;
    return begin;
}