#ifndef NEW_PROJECTS_SORT_N_COMP_H
#define NEW_PROJECTS_SORT_N_COMP_H

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include "../array/array.h"

long long getBubbleSortNCompare(int *a, size_t size);

long long getSelectionSortNCompare(int *a, size_t size);

long long getInsertionSortNCompare(int *a, size_t size);

long long getCombSortNCompare(int *a, size_t size);

long long getShellSortNCompare(int *a, size_t size);

long long getRadixSortNCompare(int *a, size_t size);

#endif //NEW_PROJECTS_SORT_N_COMP_H
