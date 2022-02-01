#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b){
    if(a==0)    return b;
    return GCD(b%a,a);
}

int LCM(int a, int b){
    return a*b/GCD(a,b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(GCD(n,m));
    answer.push_back(LCM(n,m));
    return answer;
}