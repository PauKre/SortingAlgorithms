#ifndef TEST_INSERTIONSORT_H
#define TEST_INSERTIONSORT_H


#include "Sort.h"

class InsertionSort : public Sort{

public:

    void sort(int *data, int data_length) override;

};


#endif //TEST_INSERTIONSORT_H
