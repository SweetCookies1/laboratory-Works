#include "shell_sort.h"

void shellSort(int *a, size_t size) {
    for (int d = size / 2; d > 0; d /= 2)
        for (int i = d; i < size; ++i)
            for (int j = i - d; j >= 0 && a[j] > a[j + d]; j -= d)
                swap(&a[j], &a[j + d]);
}