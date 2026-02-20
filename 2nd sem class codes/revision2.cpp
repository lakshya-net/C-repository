#include <iostream>
using namespace std;
int main() {
    int n ,x, A[10];
    cin >> n>>x;
    for (int i = 0; i < 9; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < 9; i++) {
        cout << A[i] << " ";
    }
    cout<<endl; 
    for (int k = 9; k > n-1; k--) {
        A[k] = A[k-1];
    }
    A[n-1] = x;
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }
}