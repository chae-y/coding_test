#include <stack>

int solution(string &S) {
    stack<char> stk;
    for(int i=0; i<S.size(); i++){
        if(S[i]=='('){
            stk.push(S[i]);
        }else{
            if(stk.empty()) return 0;
            stk.pop();
        }
    }
    if(stk.empty()) return 1;
    else return 0;
}