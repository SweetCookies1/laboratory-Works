#include "replaceDigitsWithSpaces.h"

void replaceNumberWithSpaces(char *str) {
    char *endBuffer = copy(str, str + strlen(str), _stringBuffer);
    char *beginBuffer = _stringBuffer;
    while (beginBuffer < endBuffer) {
        if (isdigit(*beginBuffer)) {
            int nSpaces = *beginBuffer - '0';
            for (int i = 0; i < nSpaces; i++)
                *str++ = ' ';

        } else
            *str++ = *beginBuffer;
        beginBuffer++;
    }
    *str = '\0';
}
