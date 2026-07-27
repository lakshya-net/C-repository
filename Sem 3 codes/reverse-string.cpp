#include <iostream>
#include <string>
using namespace std;

class stack{
    
    int top=-1;
    int arr[1000];

public:
    

    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }


    void push(int x){
        if(top == 999){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    };

    int peek(){
        return arr[top];
    };
};

int main (){
    string str,ans="";
    stack S;
   cin>>str;
    for(int i=0;i<str.length();i++){
        S.push(str[i]);
    }

 while(!S.empty()){
        ans+=S.peek();
        S.pop();
    }
    cout << ans << endl;
    return 0;   
}