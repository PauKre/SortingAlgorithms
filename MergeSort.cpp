#include <algorithm>
#include <iostream>
#include "MergeSort.h"


void MergeSort::sort(int *data, int data_length) {
    std::cout << "MergeSort" << std::endl;
    sortRecursively(data, 0, data_length);
}

void MergeSort::sortRecursively(int *data, int start, int end) {
    if (start >= end+1) {
        std::string test = "";
        for (int i = 0; i < 10; ++i) {
            test += std::to_string(data[i]);
        }
        std::cout << test << std::endl;
        return;
    }
    int half = (start + end) / 2;
    sortRecursively(data, start, half);
    sortRecursively(data, half, end);

    int i = start;
    int k = start;
    int j = half;
    int dataCopy[half];
    while (i < half && j < end) {
        if (data[i] < data[j]) {
            dataCopy[k] = data[i];
            k++;
            j++;
        } else {
            dataCopy[k] = data[j];
            k++;
            j++;
        }
    }
    while (i <= half) {
        dataCopy[k] = data[i];
        k++;
        i++;
    }
    while (j <= end) {
        dataCopy[k] = data[j];
        k++;
        j++;
    }
    for (i = start; i < k; i++) {
        data[i] = dataCopy[i];
    }
}
