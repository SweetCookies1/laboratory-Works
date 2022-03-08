#include "wordsDifferenceLastWord.h"

void wordsDifferenceLastWord(char *str) {
    WordDescriptor currentWord, lastWord;

    char *startWord = str;
    char *stringWriter = str;
    char *endBuff = copy(str, getEndOfString(str), _stringBuffer);
    *endBuff = '\0';

    getWordRevers(endBuff - 1, _stringBuffer - 1, &lastWord);
    while (getWord(startWord, &currentWord)) {
        if (!wordsEqual(lastWord, currentWord)) {
            stringWriter = copy(currentWord.begin, currentWord.end, stringWriter);
            *stringWriter++ = ' ';
        }
        startWord = currentWord.end;
    }
    if (stringWriter != str)
        stringWriter--;

    *stringWriter = '\0';
}
