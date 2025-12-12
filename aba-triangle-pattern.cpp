#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	for (int i = 0; i <= n; ++i) {
		for (int s = 0; s < n - i; ++s) cout << ' ';
		int l = 2 * i - 1;
		for (int j = 0; j < l; ++j) {
			cout << ((j % 2 == 0) ? 'a' : 'b');
			if (j < l - 1) cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}