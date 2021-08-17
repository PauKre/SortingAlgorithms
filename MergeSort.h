#ifndef TEST_MERGESORT_H
#define TEST_MERGESORT_H


#include "Sort.h"

class MergeSort : public Sort{
public:

    void sort(int *data, int data_length) override;

    void sortRecursively(int * data, int start, int end);
};


#endif //TEST_MERGESORT_H
