#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int A[], int n, int x) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (A[mid] == x) {
            return mid+1;
        }
        else if (A[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n,x;
    cin>>n>>x;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int result =binarySearch( *A[], n, x);
    cout<<result;
}