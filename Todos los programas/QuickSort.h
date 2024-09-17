#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class QuickSort {
public:
    void sort(std::vector<int>& arr, int low, int high);
private:
    int partition(std::vector<int>& arr, int low, int high);
};

#endif // QUICKSORT_H