//가장 긴 팰린드롭
#include <iostream>
#include <string>

using namespace std;

int answer=1;

void palindrome(int left, int right, string s, int cnt){
    while(true){
        if(left-1<0 || right+1>=s.size())   break;
        if(s[left-1]!=s[right+1]) break;
        cnt+=2;
        left--;
        right++;
    }
    answer = max(answer, cnt);
    return;
}

int solution(string s)
{
    for(int i=0; i<s.size(); i++){
        palindrome(i,i,s,1);
        if(i-1>=0 && s[i-1]==s[i])
            palindrome(i-1,i,s,2);
    }
    
    return answer;
}