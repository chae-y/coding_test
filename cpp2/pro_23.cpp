#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    while(1){
        if(n%answer==1) return answer;
        answer++;
    }
    return answer;
}