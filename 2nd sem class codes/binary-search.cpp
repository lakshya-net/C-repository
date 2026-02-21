#include <iostream>
using namespace std;

int binarySearch(int A[], int n, int x) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (A[mid] == x) {
            return mid+1;
        }
        else if (A[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}