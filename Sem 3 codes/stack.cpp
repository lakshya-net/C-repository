#include <iostream>
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
    stack S;
    S.push(10);
    S.push(20);
    S.push(30); 
    S.push(40);
 while(!S.empty()){
        cout << S.peek() << endl;
        S.pop();
    }
    return 0;   
}