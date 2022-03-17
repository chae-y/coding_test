//숫자 문자열과 영단어
#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    string answerS = "";
    for(int i=0; i<s.size(); i++){
        if('0'<=s[i] && s[i]<='9')  answerS+=s[i];
        else if(s[i]=='z'){
            answerS+='0';
            i+=3;
        }else if(s[i]=='o'){
            answerS+='1';
            i+=2;
        }else if(s[i]=='t'){
            i++;
            if(s[i]=='w'){
                answerS+='2';
                i++;   
            }else{
                answerS+='3';
                i+=3;   
            }
        }else if(s[i]=='f'){
            i++;
            if(s[i]=='o'){
                answerS+='4';
                i+=2;   
            }else{
                answerS+='5';
                i+=2;   
            }
        }else if(s[i]=='s'){
            i++;
            if(s[i]=='i'){
                answerS+='6';
                i++;   
            }else{
                answerS+='7';
                i+=3;   
            }
        }else if(s[i]=='e'){
            answerS+='8';
            i+=4;
        }else{
            answerS+='9';
            i+=3;
        }
    }
    answer = atoi(answerS.c_str());
    return answer;
}