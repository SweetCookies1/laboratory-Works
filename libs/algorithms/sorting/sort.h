#ifndef NEW_PROJECTS_SORT_H
#define NEW_PROJECTS_SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include "../array/array.h"

void bubbleSort(int *a, size_t size);

void combsort(int *a, const size_t size);

void insertionSort(int *a, const size_t size);

void getPrefixSums(int *a, size_t size);

long long getPrefixSumsComp(int *a, size_t size);

void radixSort(int *a, size_t size);

void selectionSort(int *a, size_t size);

void shellSort(int *a, size_t n);

void gnomeSort(int *a, size_t n);

#endif //NEW_PROJECTS_SORT_H
