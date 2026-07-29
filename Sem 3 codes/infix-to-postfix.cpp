#include <iostream>
#include <string>
#include <stack>
using namespace std;

int getPrecedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1; 
        case '*':
        case '/':
        case '%':
            return 2;
        case '^':
            return 3; 
        default:
            return 0; 
    }
}


string conversion(string str){
        stack <char> S;
        int n=str.size();
        string res="";
 

        for(int i=0;i<n;i++){


            if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9')){
                res+=str[i];
            }


            else if(str[i]=='('){
                S.push(str[i]);
            }


           else if(str[i] == ')'){
            while(!S.empty() && S.top() != '('){
                res += S.top();
                S.pop();
            }
            if(!S.empty()) S.pop(); 
        }

        
            else{
                while(!S.empty() && S.top() != '(' 
                      &&(getPrecedence(S.top()) > getPrecedence(str[i]) || (getPrecedence(S.top()) == getPrecedence(str[i]) && str[i] != '^'))){
                    res+=S.top();
                    S.pop();
                }
                S.push(str[i]);
            }
        }

        while(!S.empty()){
            res+=S.top();
            S.pop();
        }
        return res;

}

int expressionsol(string str){
    stack <int> S;
    int n=str.size();
    for(int i=0;i<n;i++){
        if(str[i]>='0' && str[i]<='9'){
            S.push(str[i]-'0');
        }
        else{
            int b=S.top();
            S.pop();
            int a=S.top();
            S.pop();
            switch(str[i]){
                case '+':
                    S.push(a+b);
                    break;
                case '-':
                    S.push(a-b);
                    break;
                case '*':
                    S.push(a*b);
                    break;
                case '/':
                    S.push(a/b);
                    break;
                case '%':
                    S.push(a%b);
                    break;
                case '^':
                    S.push(pow(a,b));
                    break;
            }
        }
    }
    return S.top();
}


int main(){
    string str;
    cin>>str;
    string ans = conversion(str);
    cout<<ans;
    cout<<endl;
    cout<<expressionsol(ans);
}
