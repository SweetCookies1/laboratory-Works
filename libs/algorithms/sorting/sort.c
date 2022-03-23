#include "sort.h"

void bubbleSort(int *a, size_t size) {
    for (size_t i = 0; i < size - 1; i++)
        for (size_t j = size - 1; j > i; j--)
            if (a[j - 1] > a[j])
                swap(&a[j - 1], &a[j]);
}

void combsort(int *a, const size_t size) {
    size_t step = size;
    int swapped = 1;
    while (step > 1 || swapped) {
        if (step > 1)
            step /= 1.24733;
        swapped = 0;
        for (size_t i = 0, j = i + step; j < size; ++i, ++j)
            if (a[i] > a[j]) {
                swap(&a[i], &a[j]);
                swapped = 1;
            }
    }
}

void insertionSort(int *a, const size_t size) {
    for (size_t i = 1; i < size; i++) {
        int t = a[i];
        int j = i;
        while (j > 0 && a[j - 1] > t) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = t;
    }
}

void getPrefixSums(int *a, size_t size) {
    int prev = a[0];
    *a = 0;
    for (int i = 1; i < size; i++) {
        int t = a[i];
        a[i] = prev + a[i - 1];
        prev = t;
    }
}

long long getPrefixSumsComp(int *a, size_t size) {
    long long nCompares = 0;
    int prev = a[0];
    *a = 0;
    for (int i = 1; i < size && ++nCompares; i++) {
        int t = a[i];
        a[i] = prev + a[i - 1];
        prev = t;
    }
    return nCompares;
}

void radixSort(int *a, size_t size) {
    int *buffer = (int *) calloc(size, sizeof(int));
    int max = 0b11111111;
    int step = 8;

    for (int byte = 0; byte < sizeof(int); byte++) {
        int values[UCHAR_MAX + 1] = {0};

        for (size_t i = 0; i < size; i++) {
            int curByte;
            if (byte + 1 == sizeof(int))
                curByte = ((a[i] >> (byte * step)) + CHAR_MAX + 1) & max;
            else
                curByte = (a[i] >> (byte * step)) & max;

            values[curByte]++;
        }

        getPrefixSums(values, UCHAR_MAX + 1);

        for (size_t i = 0; i < size; i++) {
            int curByte;
            if (byte + 1 == sizeof(int))
                curByte = ((a[i] >> (byte * step)) + CHAR_MAX + 1) & max;
            else
                curByte = (a[i] >> (byte * step)) & max;

            buffer[values[curByte]++] = a[i];
        }
        memcpy(a, buffer, sizeof(int) * size);
    }
    free(buffer);
}

void selectionSort(int *a, const size_t size) {
    for (int i = 0; i < size - 1; i++) {
        int minPos = i;
        for (int j = i + 1; j < size; j++)
            if (a[j] < a[minPos])
                minPos = j;
        swap(&a[i], &a[minPos]);
    }
}

void shellSort(int *a, size_t size) {
    for (int d = size / 2; d > 0; d /= 2)
        for (int i = d; i < size; ++i)
            for (int j = i - d; j >= 0 && a[j] > a[j + d]; j -= d)
                swap(&a[j], &a[j + d]);
}

void gnomeSort(int *a, size_t n) {
    int i = 0;
    while (i < n) {
        if (i == 0)
            i++;
        if (a[i] >= a[i - 1])
            i++;
        else {
            swap(&a[i], &a[i - 1]);
            i--;
        }
    }
}