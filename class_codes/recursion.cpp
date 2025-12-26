#include <iostream>
#include<math.h>
using namespace std;

float factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

float sumOfFactorials(int n) {
    if (n == 0) {
        return 0;
    }
   
    return factorial(n) + sumOfFactorials(n - 1);
}

int main() {
    int N ;
    cin >> N;
    int sum = sumOfFactorials(N);

    cout<< sum << endl;

    return 0;
}
