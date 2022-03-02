#include "test_task.h"

#define ASSERT_STRING(expected, got) assertString(expected, got, \
__FILE__, __FUNCTION__, __LINE__)

void assertString(const char *expected, char *got,
                  char const *fileName, char const *funcName,
                  int line) {
    if (strcmp(expected, got) != 0) {
        fprintf(stderr, " File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);
        fprintf(stderr, " Expected : \"%s\"\n", expected);
        fprintf(stderr, "Got: \"%s\"\n\n", got);
    } else
        fprintf(stderr, "%s - OK\n", funcName);
}

void test_removeNonLetters1() {
    char str[] = "20q 3dpd n ";

    removeNonLetters(str);

    char res[] = "20q3dpdn";

    ASSERT_STRING(res, str);
}

void test_removeNonLetters2() {
    char str[] = "    ";

    removeNonLetters(str);

    char res[] = "";

    ASSERT_STRING(res, str);
}

void test_removeNonLetters() {
    test_removeNonLetters1();
    test_removeNonLetters2();
}

void test_removeAdjacentEqualLetters1() {
    char str[] = "zgsiiiwwnnxxx";

    removeAdjacentEqualLetters(str);

    char res[] = "zgsiwnx";

    ASSERT_STRING(res, str);
}

void test_removeAdjacentEqualLetters2() {
    char str[] = "gtr123";

    removeAdjacentEqualLetters(str);

    char res[] = "gtr123";

    ASSERT_STRING(res, str);
}

void test_removeAdjacentEqualLetters() {
    test_removeAdjacentEqualLetters1();
    test_removeAdjacentEqualLetters2();
}

void test_removeExtraSpaces1() {
    char str[] = "erqw  ve dsd   5 6";

    removeExtraSpaces(str);

    char res[] = "erqw ve dsd 5 6";

    ASSERT_STRING(res, str);
}

void test_removeExtraSpaces2() {
    char str[] = "lololo     lololo";

    removeExtraSpaces(str);

    char res[] = "lololo lololo";

    ASSERT_STRING(res, str);
}

void test_removeExtraSpaces() {
    test_removeExtraSpaces1();
    test_removeExtraSpaces2();
}

void test_digitToStart1() {
    char str[] = "fho4f821";
    WordDescriptor word;

    getWord(str, &word);

    digitToStart(word);

    char res[] = "1284fhof";

    ASSERT_STRING(res, str);
}

void test_digitToStart2() {
    char str[] = "5gd319 by345";
    WordDescriptor word;

    getWord(str, &word);

    digitToStart(word);

    char res[] = "9135gd by345";

    ASSERT_STRING(res, str);
}

void test_digitToStart() {
    test_digitToStart1();
    test_digitToStart2();
}


void test_reverseWordsInString1() {
    char str[] = " ";

    test_reverseWordsInString(str);

    char res[] = " ";

    ASSERT_STRING(res, str);
}

void test_reverseWordsInString2() {
    char str[] = "qwee12";

    reverseWordsInString(str);

    char res[] = "21eewq";

    ASSERT_STRING(res, str);

}

void test_reverseWordsInString() {
    test_reverseWordsInString1();
    test_reverseWordsInString2();
}
/*
void test_getCountPalindrom1() {
    char str[] = "aqqa";

    int ans = getCountPalindom(str);

    assert(ans == 1);
}

void test_getCountPalindrom2() {
    char str[] = "gg543x, 333, jwrrwj, 0p]q";

    int res = 2;

    assert(res == getCountPalindom(str));
}

void test_getCountPalindrom() {
    test_getCountPalindrom1();
    test_getCountPalindrom2();
}


void test_digitToStartNotReverse1() {
    char str[] = "ff13po1";

    test_digitToStartNotReverse(str);

    char res[] = "131ffpo";

    ASSERT_STRING(str, res);
}

void test_digitToStartNotReverse2() {
    char str[] = "gg13vp";

    test_digitToStartNotReverse(str);

    char res[] = "13ggvp";

    ASSERT_STRING(str, res);
}

void test_digitToStartNotReverse() {
    test_digitToStartNotReverse1();
    test_digitToStartNotReverse2();
}
*/
void test_string() {
    test_removeNonLetters();
    test_removeAdjacentEqualLetters();
    test_removeExtraSpaces();
    test_digitToStart();
    test_reverseWordsInString();
//  test_getCountPalindrom();
//  test_digitToStartNotReverse();
}