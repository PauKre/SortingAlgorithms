#include "Sort.h"
#include <iostream>
#include <chrono>

double Sort::measureSort(int *data, int data_length, bool check) {
    auto start_time = std::chrono::high_resolution_clock::now();
    sort(data, data_length);
    auto end_time = std::chrono::high_resolution_clock::now();
    if(check){
        checkData(data, data_length);
    }
    /* Getting number of milliseconds as a double. */
    std::chrono::duration<double, std::milli> time = end_time - start_time;
    std::cout << "Time: " << time.count() << std::endl;
    return time.count();

}

void Sort::checkData(int *data, int data_length) {
    for (int i = 1; i < data_length; ++i) {
        if(data[i-1] > data[i]){
            std::cout << "Error" << std::endl;
            printData(data, data_length);
            return;
        }
    }
    std::cout << "Check Successful" << std::endl;
    return;
}

void Sort::printData(int *data, int length) {
    std::string print = "data: ";
    for (int i = 0; i < length; ++i) {
        print += std::to_string(data[i]);
    }
    std::cout << print << std::endl;

}
