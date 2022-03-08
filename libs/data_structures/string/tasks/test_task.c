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
void test_replaceDigitsWithSpaces1() {
    char str[] = "4la";

    replaceDigitsWithSpaces(str);

    char res[] = "    la";

    ASSERT_STRING(res, str);
}

void test_replaceDigitsWithSpaces2() {
    char str[] = "2qnn3rh 1";

    replaceDigitsWithSpaces(str);

    char res[] = "  qnn   rh  ";

    ASSERT_STRING(res, str);
}

void test_replaceDigitsWithSpaces() {
    test_replaceDigitsWithSpaces1();
    test_replaceDigitsWithSpaces2();
}

void test_digitToStart1() {
    char str[] = "frf123";
    WordDescriptor word;

    getWord(str, &word);

    digitToStart(word);

    char res[] = "321frf";

    ASSERT_STRING(res, str);
}

void test_digitToStart2() {
    char str[] = "tur13 909 rt5";
    WordDescriptor word;

    getWord(str, &word);

    digitToStart(word);

    char res[] = "31tur 909 rt5";

    ASSERT_STRING(res, str);
}

void test_digitToStart() {
    test_digitToStart1();
    test_digitToStart2();
}

void test_digitToEndReverse1() {
    char str[] = "yuy67 43ewe";

    digitToEndReverse(str);

    char res[] = "yuy76 ewe34";

    ASSERT_STRING(res, str);
}

void test_digitToEndReverse2() {
    char str[] = "9012";

    digitToEndReverse(str);

    char res[] = "2109";

    ASSERT_STRING(res, str);
}

void test_digitToEndReverse() {
    test_digitToEndReverse1();
    test_digitToEndReverse2();
}

void test_getCountPalindrom1() {
    char str[] = "g11g, re423, tttttt, tr1221rt";

    int res = 3;

    assert(res == getCountPalindom(str));

    printf("test_getCountPalindrom1 - OK\n");
}

void test_getCountPalindrom2() {
    char str[] = "tytr uio 123";

    int res = 0;

    assert(res == getCountPalindom(str));

    printf("test_getCountPalindrom2 - OK\n");
}

void test_getCountPalindrom() {
    test_getCountPalindrom1();
    test_getCountPalindrom2();
}

void test_removeAdjacentEqualLetters1() {
    char str[] = "fff12eeee";

    removeAdjacentEqualLetters(str);

    char res[] = "f12e";

    ASSERT_STRING(res, str);
}

void test_removeAdjacentEqualLetters2() {
    char str[] = "jjjjj";

    removeAdjacentEqualLetters(str);

    char res[] = "j";

    ASSERT_STRING(res, str);
}

void test_removeAdjacentEqualLetters() {
    test_removeAdjacentEqualLetters1();
    test_removeAdjacentEqualLetters2();
}

void test_removeExtraSpaces1() {
    char str[] = "qaz q    er";

    removeExtraSpaces(str);

    char res[] = "qaz q er";

    ASSERT_STRING(res, str);
}

void test_removeExtraSpaces2() {
    char str[] = "hgh";

    removeExtraSpaces(str);

    char res[] = "hgh";

    ASSERT_STRING(res, str);
}

void test_removeExtraSpaces() {
    test_removeExtraSpaces1();
    test_removeExtraSpaces2();
}

void test_removeNonLetters1() {
    char str[] = "jkoj e5 1";

    removeNonLetters(str);

    char res[] = "jkoje51";

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

void test_reverseString1() {
    char str[] = "rock num";
    char res1[] = "num rock";
    reverseString(str);

    ASSERT_STRING(str, res1);
}

void test_reverseString2() {
    char str[] = "pop dog";
    char res1[] = "dog pop";
    reverseString(str);

    ASSERT_STRING(str, res1);
}

void test_reverseString() {
    test_reverseString1();
    test_reverseString2();
}

void test_wordsOrdered1() {
    char str[] = "bool code";
    bool res = true;

    assert(wordOrdered(str) == res);

    printf("test_wordsOrdered1 - OK\n");
}

void test_wordsOrdered2() {
    char str[] = "alert hits bunny";
    bool res = true;

    assert(!wordOrdered(str) == res);

    printf("test_wordsOrdered2 - OK\n");
}

void test_wordsOrdered() {
    test_wordsOrdered1();
    test_wordsOrdered2();
}

void test_wordsAreUnique1() {
    char str[] = "";
    bool res = wordsAreUnique(str);

    assert(res == true);

    printf("test_wordsAreUnique1 - OK\n");
}

void test_wordsAreUnique2() {
    char str[] = "reteb wql fie";

    bool res = wordsAreUnique(str);

    assert(res == true);

    printf("test_wordsAreUnique2 - OK\n");
}

void test_wordsAreUnique() {
    test_wordsAreUnique1();
    test_wordsAreUnique2();
}

void testAll_wordBeforeFirstWordWithA() {
    WordDescriptor word;
    char s1[] = "";
    assert (getWordBeforeFirstWordWithA(s1, &word)== EMPTY_STRING);

    char s2[] = " ABC ";
    assert (getWordBeforeFirstWordWithA(s2, &word) == FIRST_WORD_WITH_A);

    char s3[] = "BC A";
    assert (getWordBeforeFirstWordWithA(s3, &word) == WORD_FOUND);

    char got[MAX_WORD_SIZE];
    copy(word.begin, word.end, got);
    got[word.end - word.begin] = '\0';
    ASSERT_STRING ("BC", got);

    char s4[] = "B Q WE YR OW IUWR ";
    assert (getWordBeforeFirstWordWithA(s4, &word) == NOT_FOUND_A_WORD_WITH_A);
}

void test_mixedStringFromTwo1() {
    char str1[] = "one three five";
    char str2[] = "two four six";

    char str3[MAX_STRING_SIZE];

    mixedStringFromTwo(str1, str2, str3);

    char res[] = "one two three four five six";

    ASSERT_STRING(res, str3);
}

void test_mixedStringFromTwo2() {
    char str1[] = "a b c d";
    char str2[] = "i f";

    char str3[MAX_STRING_SIZE];

    mixedStringFromTwo(str1, str2, str3);

    char res[] = "a i b f c d";

    ASSERT_STRING(res, str3);
}

void test_mixedStringFromTwo() {
    test_mixedStringFromTwo1();
    test_mixedStringFromTwo2();
}

void test_string() {
    test_replaceDigitsWithSpaces();
    test_digitToStart();
    test_digitToEndReverse();
    test_getCountPalindrom();
    test_removeAdjacentEqualLetters();
    test_removeExtraSpaces();
    test_removeNonLetters();
    test_reverseString();
    test_wordsOrdered();
    test_wordsAreUnique();
    testAll_wordBeforeFirstWordWithA();
    test_mixedStringFromTwo();

}