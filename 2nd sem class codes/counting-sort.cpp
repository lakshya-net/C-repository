#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int x = 0; x < n; x++) {
        cin >> A[x];
    }

    int max_val = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max_val) {
            max_val = A[i];
        }
    }

      
    
    vector<int> count(max_val + 1, 0);
    for (int i = 0; i < n; i++) {
        count[A[i]]++;
    }
    for (int i = 1; i <= max_val; i++) {
        count[i] += count[i - 1];
    }
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
        output[count[A[i]] - 1] = A[i];
        count[A[i]]--;
    }

    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}