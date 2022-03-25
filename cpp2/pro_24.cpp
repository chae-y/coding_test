#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b, vector<int> g, vector<int> s, vector<int> w, vector<int> t) {
    long long answer = 2000000000000000;
    long long start = 1;
    long long end = 2000000000000000;
    while(start<=end){
        long long mid = (start+end+1)/2;
        long long gold=0;
        long long silver=0;
        long long add=0;
        
        for(int i=0; i<g.size(); i++){
            long long move = (mid+t[i])/(t[i]*2);
            gold += (g[i]<move*w[i])? g[i] : move*w[i];
            silver += (s[i]<move*w[i])? s[i] : move*w[i];
            add += (g[i]+s[i]<move*w[i])? g[i]+s[i] : move*w[i];
        }
        if(gold>=a && silver>=b && add >=a+b){
            end = mid-1;
            answer = min(mid, answer);
        }else{
            start = mid+1;
        }
    }
    return answer;
}