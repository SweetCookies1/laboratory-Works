#include "replaceDigitsWithSpaces.h"

void replaceDigitsWithSpaces(char *str) {
    char *endBuffer = copy(str, str + strlen_(str), _stringBuffer);
    char *beginBuffer = _stringBuffer;
    while (beginBuffer < endBuffer) {
        if (isdigit(*beginBuffer)) {
            int nSpaces = *beginBuffer - '0';
            for (int i = 0; i < nSpaces; i++)
                *str++ = ' ';

        } else
            *(str++) = *beginBuffer;
        beginBuffer++;
    }
    *str = '\0';
}
