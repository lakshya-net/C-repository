#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    if (exp == 0) return 1;
    else {
    return( base * power(base, exp - 1));
    return result;
   } 
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
       sum += power(2*k,k+2) / (float)factorial(k+2);
    }
    cout << sum << endl;
    return 0;
}