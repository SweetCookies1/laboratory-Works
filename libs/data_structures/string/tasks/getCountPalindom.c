#include "getCountPalindom.h"

int isPalindromeWord(WordDescriptor word) {
    char *left = word.begin;
    char *right = word.end - 1;

    while (right  > left) {
        if (*left != *right)
            return 0;

        left++;
        right--;
    }
    return 1;
}

int getCountPalindom(char *str) {
    WordDescriptor word;
    int count = 0;

    if (*str == '\0')
        return 0;

    while (getWordSeparatedComma(str, &word)) {
        count += (isPalindromeWord(word));
        str = word.end + 1;
    }
    return count;
}