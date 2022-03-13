#ifndef INC_ARRAY_H
#define INC_ARRAY_H

#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b);

int cmp_long_long(const void *pa, const void *pb);

int countNUnique(long long *a, int n);

void insertionSort(int *a, const size_t size);

void inputArray_(int *a, size_t n);

void outputArray_(const int *a, size_t n);

size_t linearSearch_(const int *a, const size_t n, int x);

size_t binarySearch(const int *a, size_t n, int x);

size_t binarySearchMoreOrEqual_(const int *a, const size_t n, int x);

void insert_(int *a, size_t *n, size_t pos, int value);

void append_(int *a, size_t *n, int value);

void deleteByPosSaveOrder_(int *a, size_t *n, size_t pos);

void deleteByPosUnsaveOrder_(int *a, size_t *n, size_t pos);

int binarySearchLessOrEqual(const int *a, size_t n, int x);

int all_(const int *a, size_t n, int (*predicate )(int));

int any_(const int *a, size_t n, int (*predicate )(int));

void forEach_(const int *source, int *dest, size_t n, const int (*predicate )(int));

int countIf_(const int *a, size_t n, int (*predicate )(int));

void deleteIf_(int *a, size_t *n, int (*deletePredicate )(int));

int getPositionithGivenValue(const int *a, const size_t n, const int x);

int findFirsNegativeIndex(const int *a, const size_t n);

int findIndexIf(const int *a, const size_t n, int (*f)(int));

int findLastEvenIndex(const int *a, const size_t n);

int findIndexLastIf(const int *a, const size_t n, int (*f)(int));

int getNegativeCount(const int *a, const size_t n);

int getCountIf(const int *a, const size_t n, int (*f)(int));

//обменивает значения по адресам переменных a и b
void swap(int *a, int *b);

void reverseArray(int *a, size_t n);

int isPalindrom(const int *a, const size_t n);

void sortChoice(int *a, size_t n);

void removeAllOddElements(int *a, size_t *n);

void insertAnElement(int *a, size_t *n, size_t pos, int x);

void deleteByPosSaveOrder(int *a, size_t *n, const size_t pos);

void deleteByPosUnsaveOrder(int *a, size_t *n, size_t pos);

void forEach(int *a, const size_t size, void (*f)(int *));


int any(const int *a, const size_t size, int (*f)(int));


int all(const int *a, const size_t size, int (*f)(int));

void arraySplit(const int *a, size_t sizeA, int *b, size_t *sizeB, int *c, size_t *sizeC, int (*pred )(int));

size_t linearSearchFirstMaxIndex(const int *a, const size_t n);

int linearSearchMax(const int *a, const size_t n);

size_t linearSearchLastMinIndex(const int *a, const size_t n);

int linearSearchMin(const int *a, const size_t n);

long long getSum(const int *a, const size_t n);

bool isUniqueArray(const int *a, const size_t n);

float getDistance(int *a, int n);

bool isNonDescendingSorted(int *a, int n);

int countValues(const int *a, int n, int value);

int maximum(int a, int b);
#endif
