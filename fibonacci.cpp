#include <iostream>

int main() {
    int limit;
    int a = 0, b = 1, nextTerm;

    std::cout << "Enter the limit: ";
    std::cin >> limit;

    std::cout << "Fibonacci Series up to " << limit << ":\n";

    if (limit >= 0) {
        std::cout << a << " ";
    }
    if (limit >= 1) {
        std::cout << b << " ";
    }

    nextTerm = a + b;

    while (nextTerm <= limit) {
        std::cout << nextTerm << " ";
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }

    std::cout << std::endl;

    return 0;
}
