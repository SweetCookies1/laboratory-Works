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

    char *lastWriten = str;

    while (getWordSeparatedComma(lastWriten, &word)) {
        count += (isPalindromeWord(word));
        lastWriten = word.end + 1;
    }
    return count;
}