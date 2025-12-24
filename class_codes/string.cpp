#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
main(){
    string Z,ans=" ";
    int N,K;
    cin>>N>>K;
    cin>>Z;
    for (int x=0;x<N;x+=1){
      if(x%2==0){
    string A=Z.substr(x,K);
    ans= ans + A;
      }
    else{
    string C=Z.substr(x,K);
    reverse(C.begin(),C.end());
    ans = ans + C;
    }
  }
    cout<<ans; 
 }
