#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(int i=left; i<=right; i++){
        int p = pow(i,0.5);
        if(p*p==i)  answer-=i;
        else    answer+=i;
    }
    return answer;
}