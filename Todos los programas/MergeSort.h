#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
public:
    void sort(std::vector<int>& arr, int left, int right);
private:
    void merge(std::vector<int>& arr, int left, int mid, int right);
};

#endif // MERGESORT_H