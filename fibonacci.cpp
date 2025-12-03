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
int fib(int t){

    if (limit >= 0) {
        cout << a << " ";
    }
    if (limit >= 1) {
        cout << b << " ";
    }

    nextTerm = a + b;

    while (nextTerm <= limit) {
        cout << nextTerm << " ";
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }
    return ; 
}
    
