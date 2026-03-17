#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int x=0;x<n;x++){
        cin>>A[x];
    }    
    int max = A[0];
    for(int i=1;i<n;i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    int count[max+1]={0};
    for(int i=0;i<n;i++){
        count[A[i]]++;
    }
    for(int i=1;i<=max;i++){
        count[i] += count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[count[A[i]]-1]=A[i];
        count[A[i]]--;
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
}