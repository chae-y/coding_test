#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

//가장 큰금액, 절댓값
using namespace std;

vector<long long> num;
vector<char> operation;

long long calculation(long long a, long long b, char c){
    if(c=='+')  return a+b;
    else if(c=='-')  return a-b;
    else return a*b;
}

void input(string expression){
    long long temp = 0;
    for(int i=0; i<expression.size(); i++){
        char now = expression[i];
        if(now == '+' || now == '-' || now == '*'){
            num.push_back(temp);
            temp = 0;
            operation.push_back(now);
        }
        else{
            temp = temp*10 + (now-'0');
        }
    }
    num.push_back(temp);
}

long long solution(string expression) {
    long long answer = 0;
    input(expression);
    vector<char> oper = {'*','+','-'};
    do{
        vector<char> tempOperation = operation;
        vector<long long> tempNum = num;
        for(int i=0; i<3; i++){
            cout<<oper[i];
            for(int j=0; j<tempOperation.size(); j++){
                if(oper[i] == tempOperation[j]){
                    tempNum[j] = calculation(tempNum[j],tempNum[j+1],oper[i]);
                    tempNum.erase(tempNum.begin()+j+1);
                    tempOperation.erase(tempOperation.begin()+j);
                    j--;
                }
            }
        }
        answer = max(abs(tempNum[0]), answer);
    }while (next_permutation(oper.begin(), oper.end()));
    
    return answer;
}