#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s,s1="",s2="";
    int N;
    cin >> N;
    cin >> s;
    for(int i=0;i<N;i++)
    {
        if (isalpha(s[i])){
        char ch=tolower(s[i]);
        s1=s1+ch;
        }
        else if(isdigit(s[i])){
        s1+=s[i];
        }
        else{
            s2+=s[i];
        }
    }
    cout<<s1+s2<<endl;
}
