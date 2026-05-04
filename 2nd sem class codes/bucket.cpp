#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Step 1: Read the number of elements
    int n;
    cin >> n;

    // Step 2: Read the array of floating-point numbers
    vector<float> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 3: Create buckets (vector of vectors)
    vector<float> bucket[n];

    // Step 4: Distribute elements into buckets based on their value
    for (int i = 0; i < n; i++) {
        int index = n * arr[i];
        bucket[index].push_back(arr[i]);
    }

    // Step 5: Sort each bucket individually
    for (int i = 0; i < n; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }

    // Step 6: Collect elements from buckets back into the original array
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (size_t j = 0; j < bucket[i].size(); j++) {
            arr[k++] = bucket[i][j];
        }
    }

    // Step 7: Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}