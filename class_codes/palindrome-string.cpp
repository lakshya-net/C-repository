#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
main(){
    string s;
    int N;
    cin>>N;
    cin>>s;
    string r=s;
    reverse(r.begin(),r.end()); 
    if(s==r){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
