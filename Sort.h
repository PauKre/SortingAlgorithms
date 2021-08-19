#ifndef TEST_SORT_H
#define TEST_SORT_H


class Sort {

public:
    virtual void sort(int *data, int data_length){};

    double measureSort(int data[], int data_length, bool check);

    void printData(int *data, int length);
private:

    void checkData(int data[], int data_length);
};


#endif //TEST_SORT_H
