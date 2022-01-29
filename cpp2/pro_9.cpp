#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left = 10;
    int right = 12;
    for(int n : numbers){
        if(n==0)    n=11;
        if(n==1 || n==4 || n==7){
            answer += "L";
            left = n;
        }else if(n==3 || n==6 || n==9){
            answer += "R";
            right = n;
        }else{
            int r,l;
            if(right==2 || right==5 || right==8 || right==11){
                r = abs(right-n)/3;
            }else{
                r = abs(right-1-n)/3+1;
            }
            if(left==2 || left==5 || left==8 || left==11){
                l = abs(left-n)/3;
            }else{
                l = abs(left+1-n)/3+1;
            }
            if(r==l){
                if(hand=="right"){
                    answer+="R";
                    right = n;
                }else{
                    answer+="L";
                    left = n;
                }
            }else if(l>r){
                answer+="R";
                right = n;
            }else{
                answer+="L";
                left = n;
            }
        }
    }
    return answer;
}