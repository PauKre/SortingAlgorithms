#include <algorithm>
#include <iostream>
#include "MergeSort.h"


void MergeSort::sort(int *data, int data_length) {
    std::cout << "MergeSort" << std::endl;
    sortRecursively(data,data_length, 0, data_length);
}

void MergeSort::sortRecursively(int *data, int length, int start, int end) {
    if (start+1 >= end) {
        return;
    }
    int half = (start + end) / 2;
    sortRecursively(data,length, start, half);
    sortRecursively(data,length, half, end);

    int i = start;
    int k = start;
    int j = half;
    int *dataCopy =  new int[length];
    while (i < half && j < end) {
        if (data[i] < data[j]) {
            dataCopy[k] = data[i];
            k++;
            i++;
        } else {
            dataCopy[k] = data[j];
            k++;
            j++;
        }
    }
    while (i < half) {
        dataCopy[k] = data[i];
        k++;
        i++;
    }
    while (j < end) {
        dataCopy[k] = data[j];
        k++;
        j++;
    }
    for (i = start; i < k; i++) {
        data[i] = dataCopy[i];
    }
    std::cout << "Merged " << start << " to " << half << " with " << half << " to " << end << std::endl;
    printData(data, length);
    delete dataCopy;
    return;
}
