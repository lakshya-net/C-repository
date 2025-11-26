#include <iostream>
using namespace std;

bool prime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

 main() {
   cout << prime(6);
    return true;
}