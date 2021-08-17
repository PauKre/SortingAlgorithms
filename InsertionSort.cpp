#include <iostream>
#include "InsertionSort.h"

void InsertionSort::sort(int *data, int data_length) {
    std::cout << "InsertionSort" << std::endl;
    for (int i = 1; i < data_length; ++i) {
        int k;
        for (k = i; k > 0 && data[k] < data[k - 1]; --k) {
            int temp = data[k];
            data[k] = data[k - 1];
            data[k - 1] = temp;
        }
    }
}
