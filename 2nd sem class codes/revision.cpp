#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n , A[10];
    cin >> n;
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }
    for (int k = n; k < 10; k++) {
        A[k-1] = A[k];
    }
    for (int i = 0; i < 9; i++) {
        cout << A[i] << " ";
    }
}