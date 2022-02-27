// you can use includes, for example:
// #include <algorithm>
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> stk;
    int result = 0;

    for(int h : H){
        while(!stk.empty() && h<stk.top()){
            stk.pop();
        }
        if(stk.empty() || h>stk.top()){
            stk.push(h);
            result ++;
        }
    }
    return result;
}