#include<iostream>
using namespace std;

void tower(int n, char A, char B, char C) {
    if (n == 1) {
        cout << A << " to rod " << C << endl;
    }
    else{
    tower(n - 1, A, C, B);
    tower(1, A, B, C);
    tower(n - 1, B, A, C);
    }
}

int main() {
    int n;
    cin >> n;
    tower(n, 'A', 'B', 'C');
    return 0;
}