//
// Created by alejandro on 10/09/24.
//

#include "BubbleSort.h"
#include <vector>
using namespace std;

void BubbleSort::sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}