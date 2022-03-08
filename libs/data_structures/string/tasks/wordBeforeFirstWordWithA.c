#include "wordBeforeFirstWordWithA.h"

WordBeforeFirstWordWithAReturnCode getWordBeforeFirstWordWithA(char *s, WordDescriptor *word) {
    WordDescriptor prevWord;
    char *startWord = s;

    if (!getWord(startWord, &prevWord))
        return EMPTY_STRING;

    if (*find(prevWord.begin, prevWord.end, 'a') == 'a' || *find(prevWord.begin, prevWord.end, 'A') == 'A')
        return FIRST_WORD_WITH_A;

    startWord = prevWord.end;
    WordDescriptor curWord;
    while (getWord(startWord, &curWord)) {
        if (*find(curWord.begin, curWord.end, 'a') == 'a' || *find(curWord.begin, curWord.end, 'A') == 'A') {
            *word = prevWord;
            return WORD_FOUND;
        }
        startWord = curWord.end;
        prevWord = curWord;
    }
    return NOT_FOUND_A_WORD_WITH_A;
}
