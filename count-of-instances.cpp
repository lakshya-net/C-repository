#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    cin.ignore();
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if (s1[i]==s2[j]){
                count++;
            }
        }
        cout<<count<<" ";
    }
    return 0;
}