#include <iostream>
using namespace std;

void isPalindrome(string str, int start, int end){
    if(start>=end){
        cout<<"Palindrome"<<endl;
        return;
    }
    if(str[start]!=str[end]){
        cout<<"Not Palindrome"<<endl;
        return;
    }
    isPalindrome(str,start+1,end-1);
}

int main(){
    string str = "racecar";
    isPalindrome(str, 0, str.length()-1);
    return 0;
}