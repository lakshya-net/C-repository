#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s,ans="",r;
    int n,K=0;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i++) {
    if (isdigit(s[i])) {
    K+=s[i]-'0';
    }
    else{
    ans+=s[i];
    }
}
    n=ans.length();
    K=K%n;
    if(K%2==0){
    r =ans.substr(n-K,K)+ans.substr(0,n-K);     
       }
       else{
    r =ans.substr(K,n-K)+ans.substr(0,K);     
       }
    cout<<r<<endl;
    return 0;
    }