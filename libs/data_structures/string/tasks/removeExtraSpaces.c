#include <memory.h>
#include "removeExtraSpaces.h"

void removeExtraSpaces(char *s) {
    if (*s == '\0')
        return;

    char *lastWriten = s;
    s++;
    while (*s) {
        if (isspace(*lastWriten) && isspace(*s)) {
            *lastWriten = ' ';
        } else {
            *++(lastWriten) = *s;
        }
        s++;
    }
    *(++lastWriten) = '\0';
}
