#include "deleteIsPalindromeWord.h"

void deleteWordIsPalindrome(char *str) {
    WordDescriptor word;
    char *begin = str;
    char *end = str;

    while (getWord(begin, &word)) {
        if (!isPalindromeWord(word)) {
            end = copy(word.begin, word.end, end);
            *end++ = ' ';
        }
        begin = word.end;
    }
    if(str != end)
        end--;
    *end = '\0';
}