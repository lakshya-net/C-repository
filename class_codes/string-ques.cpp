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
   for(int x=0; x<M; x++){
    cout<<a[x][0].length()<<" "<<a[x][N-1].length()<<endl;
}
    return 0;
}