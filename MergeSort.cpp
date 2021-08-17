#include <algorithm>
#include <iostream>
#include "MergeSort.h"


void MergeSort::sort(int *data, int data_length) {
    std::cout << "MergeSort" << std::endl;
    sortRecursively(data, 0, data_length);
}

void MergeSort::sortRecursively(int *data, int start, int end){
    if(end - start <= 1)
        return;
    int half = (start+end)/2;
    sortRecursively(data, start, half);
    sortRecursively(data, half, end);

    int *dataCopy = data;
    int i = start;
    int j = half;
    int k = start;
    while (j < half && j < end)
        data[k++] = (data[j] < dataCopy[i] ? data[j++] : dataCopy[i++]);
    while (i <= half)
        data[k++] = dataCopy[i++];
}
