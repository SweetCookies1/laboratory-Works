#include "sort_n_comp.h"
#include "sort.h"

long long getBubbleSortNComps(int *a, const size_t n) {
    long long nComps = 0;
    for (int i = 0; ++nComps && i < n; ++i)
        for (int j = i; ++nComps && j < n; ++j)
            if (++nComps && a[i] > a[j])
                swap(&a[i], &a[j]);

    return nComps;
}

long long getSelectionSortNCompare(int *a, size_t size) {
    long long nCompares = 0;
    for (int i = 0; ++nCompares && i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; ++nCompares && j < size; j++)
            if (++nCompares && a[j] < a[minIndex]) {
                minIndex = j;
            }
            swap(&a[i], &a[minIndex]);
    }
    return nCompares;
}

long long getInsertionSortNCompare(int *a, size_t size) {
    long long nCompares = 0;
    for (int i = 1; ++nCompares && i < size; ++i) {
        int t = a[i];
        int j = i;
        while (++nCompares && j > 0 && a[j - 1] > t) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = t;
    }
    return nCompares;
}

long long getCombSortNCompare(int *a, size_t size) {
    long long nCompares = 0;
    size_t step = size;
    int swapped = 1;
    while (++nCompares && (step > 1 || swapped)) {
        if (++nCompares && step > 1)
            step /= 1.24733;
        swapped = 0;
        for (size_t i = 0, j = i + step; ++nCompares && j < size; ++i, ++j)
            if (++nCompares && a[i] > a[j]) {
                swap(&a[i], &a[j]);
                swapped = 1;
            }
    }
    return nCompares;
}

long long getShellSortNCompare(int *a, size_t size) {
    long long nCompares = 0;
    for (int d = size / 2; ++nCompares && d > 0; d /= 2)
        for (int i = d; ++nCompares && i < size; ++i)
            for (int j = i - d; ++nCompares && j >= 0 && a[j] > a[j + d]; j -= d) {
                nCompares += 2;
                swap(&a[j], &a[j + d]);
            }

    return nCompares;
}

long long getRadixSortNCompare(int *a, size_t size) {
    long long nCompares = 0;
    int *buffer = (int *) calloc(size, sizeof(int));
    int max = 0b11111111;
    int step = 8;

    for (int byte = 0; ++nCompares && byte < sizeof(int); byte++) {
        int values[UCHAR_MAX + 1] = {0};

        for (size_t i = 0; ++nCompares && i < size; i++) {
            int curByte;
            if (++nCompares && byte + 1 == sizeof(int))
                curByte = ((a[i] >> (byte * step)) + CHAR_MAX + 1) & max;
            else
                curByte = (a[i] >> (byte * step)) & max;

            values[curByte]++;
        }

        nCompares += getPrefixSumsComp(values, UCHAR_MAX + 1);

        for (size_t i = 0; ++nCompares && i < size; i++) {
            int curByte;
            if (++nCompares && byte + 1 == sizeof(int))
                curByte = ((a[i] >> (byte * step)) + CHAR_MAX + 1) & max;
            else
                curByte = (a[i] >> (byte * step)) & max;

            buffer[values[curByte]++] = a[i];
        }
        memcpy(a, buffer, sizeof(int) * size);
    }
    free(buffer);

    return nCompares;
}

long long getGnomeSortNCompare(int *a, size_t n) {
    int i = 0;
    long long nCompare = 0;
    while (++nCompare && i < n) {
        if (++nCompare && a[i] >= a[i - 1])
            i++;
        else {
            swap(&a[i], &a[i - 1]);
            i--;
        }
    }
    return nCompare;
}
