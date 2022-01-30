//가로w 세로h
#include<iostream>

using namespace std;

int GCD(int a, int b){
    if(b==0)    return a;
    return GCD(b, a%b);
}

long long solution(int w,int h) {
    long long answer = 1;
    answer = (long long)w*h;
    //최대공약수로 나눈거 만큼이네 더하고 뺴기1 곱하기 최대공약수
    int gcd = GCD(w,h);
    int a = w/gcd;
    int b = h/gcd;
    answer-=(a+b-1)*gcd;
    return answer;
}