#ifndef NEW_PROJECTS_SORT_N_COMP_H
#define NEW_PROJECTS_SORT_N_COMP_H

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include "../array/array.h"

void getMergeComps(const int *a, const size_t sizeA,
                   const int *b, const size_t sizeB,
                   int *c);

void _getMergeSortComps(int *a, int left, int right,
                        int *buf);

long long getMergeSortComps(int *a, size_t n);

long long getSelectionSortNCompare(int *a, size_t size);

long long getInsertionSortNCompare(int *a, size_t size);

long long getCombSortNCompare(int *a, size_t size);

long long getShellSortNCompare(int *a, size_t size);

long long getRadixSortNCompare(int *a, size_t size);

#endif //NEW_PROJECTS_SORT_N_COMP_H
