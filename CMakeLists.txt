cmake_minimum_required(VERSION 3.17)
project(Test)

set(CMAKE_CXX_STANDARD 17)

add_executable(Test main.cpp Sort.cpp Sort.h InsertionSort.cpp InsertionSort.h MergeSort.cpp MergeSort.h QuickSort.cpp QuickSort.h QuickSort3.cpp QuickSort3.h ShellSort.cpp ShellSort.h)