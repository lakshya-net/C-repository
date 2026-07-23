#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Step 1: Read the number of elements
    int n;
    cin >> n;
    vector<float> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }



    vector<float> bucket[n];

    for (int i = 0; i < n; i++) {
        int index = n * arr[i];
        bucket[index].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }

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