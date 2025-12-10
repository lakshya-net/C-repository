#include<iostream>
using namespace std;
main(){
    string Z;
    int K, N;
    cin>>N>>K;
    cin>>Z;
    for(int i=K;i<=N-1-K;i++){
        cout<<Z[i];   
    }
    
}