#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 9){
        int sum = 0;
        int  num = n;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        n = sum;
    }
    cout << n << endl;
    return 0;
}