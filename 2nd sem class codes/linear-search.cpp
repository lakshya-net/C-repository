#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n, x;
    cin >> n >> x;
    int A[n] ;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }


    int B[n] = {0};
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            j++;
            B[j] = i+1;
        }
    }


    cout<<"elements are found at positions: ";
    for(int i = 0; i <= j; i++) {
        cout << B[i] << " ";
    }
}
    