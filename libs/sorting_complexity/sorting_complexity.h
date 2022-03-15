#ifndef NEW_PROJECTS_SORTING_COMPLEXITY_H
#define NEW_PROJECTS_SORTING_COMPLEXITY_H

#include <stddef.h>
#include <stdbool.h>

#include "../algorithms/array/array.h"
#include "generators/generators.h"
#include "../algorithms/sorting/bubble_sort.h"
#include "../algorithms/sorting/comb_sort.h"
#include "../algorithms/sorting/insertion_sort.h"
#include "../algorithms/sorting/selection_sort.h"
#include "../algorithms/sorting/shell_sort.h"
#include "../algorithms/sorting/radix_sort.h"


typedef struct sortFunc {
    void (*sort)(int *a, size_t n); // указатель на функцию сортировки.
    char name[64];                  // имя сортировки, используемое при выводе.
} sortFunc;

typedef struct generateFunc {
    void (*generate)(int *a, size_t n); // указатель на функцию генерации последовательности.
    char name[64];                      // имя генератора, используемое при выводе.
} generateFunc;

void checkTime(void (*sort)(int *, size_t),
               void (*generate)(int *, size_t),
               size_t size, char *experimentName);

void timeExperiment();

#endif //NEW_PROJECTS_SORTING_COMPLEXITY_H
