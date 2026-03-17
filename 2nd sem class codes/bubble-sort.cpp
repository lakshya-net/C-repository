#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int x=0;x<n;x++){
        cin>>A[x];
    }    
    for(int i =0;i<n-1;i++){
        for(int k=0;k<n-1-i;k++){
            if(A[k]>A[k+1]){
                int temp = A[k];
                A[k]=A[k+1];
                A[k+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}