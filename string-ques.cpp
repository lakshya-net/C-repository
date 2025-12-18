#include <iostream>
#include <string>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    cin.ignore(); 
    string a[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin>>a[i][j];
        }
    }
    cout<<a[0][0]<<" "<<a[M-1][N-1];
    return 0;

}