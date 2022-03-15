#include <stdlib.h>
#include <time.h>
#include "generators.h"

void generateRandomArray(int *a, const size_t n) {
    srand(time(NULL));
    for (register size_t i = 0; i < n; i++) {
        a[i] = rand() % 1000000;
    }
}

void generateOrderedArray(int *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        a[i] = i;
}

void generateOrderedBackwardsArray(int *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        a[i] = n - i;
}
