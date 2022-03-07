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

void test_string() {
    test_removeNonLetters();
    test_removeAdjacentEqualLetters();
    test_removeExtraSpaces();
    test_digitToStart();
}