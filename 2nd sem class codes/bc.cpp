#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    string s;
    cin>>n;
    cin.ignore();
    cin>>s;
    char abc[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int freq[26]={0};
    for(int i=0;i<26;i++){
        for(int k=0;k<n;k++){
            if(abc[i]==s[k]){
                freq[i]++;            
            }
        }
    }
    bool f = true;
    for(int x=0;x<26;x++){
        if(freq[x]%2!=0){
            f=false;
            break;
        }
    }
    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}