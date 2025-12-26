#include <iostream>
using namespace std;
int fib(int t);
int a = 0, b = 1, nextTerm , limit;
int main() {
    cout << "Enter the limit: ";
    cin >> limit;
    cout<<fib(limit);
    return 0;
}
int fib(int n) {
    if (n <= 1) {
        return n;
    } 
    else {    
        return fib(n - 1) + fib(n - 2);
    }
}
