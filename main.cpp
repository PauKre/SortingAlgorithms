#include <iostream>
#include "InsertionSort.h"
#include "MergeSort.h"


int main() {
    int datasetSize = 10000;
    int normalRange = 100000;
    int fewUniqueRange = 10;
    int randomData[datasetSize], fewUnique[datasetSize];
    for (int i = 0; i < datasetSize; ++i) {
        randomData[i] = std::rand() % normalRange;
        fewUnique[i] = std::rand() % fewUniqueRange;
        //        std::cout << fewUnique[i] << " " << randomData[i] << std::endl;
    }
//    InsertionSort insertionSort;
//    insertionSort.measureSort(fewUnique, datasetSize, true);
    MergeSort mergeSort;
    mergeSort.measureSort(fewUnique, datasetSize, true);
}