#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

int factorial(int num) {
    int result2 = 1;
    for (int i = 2; i <= num; ++i) {
        result2 *= i;
    }
    return result2;
}

int main() {
    int sum = 0,n;
    cin>>n;
    for (int k = 1; k <= n; ++k) {
       sum += power(2*k,k+2) / factorial(k+2);
    }
    cout << sum << endl;
    return 0;
}