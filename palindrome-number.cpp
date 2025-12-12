#include<iostream>
using namespace std;

int main() {
    int m,n,temp;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        temp=i;
        int rev=0;
        while(temp!=0){
            int digit=temp%10;
            rev=rev*10+digit;
            temp=temp/10;
        }
        if(rev==i){
            cout<<i<<" ";
        }
    }
}