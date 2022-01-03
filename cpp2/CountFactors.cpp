#include <cmath>

int solution(int N) {
    if(N==1)    return 1;
    int answer = 0;
    for(int i=1; i<sqrt(N); i++){
        if(N%i==0)  answer++;
    }
    answer*=2;
    if(pow((int)sqrt(N),2)==N)    answer++;
    return answer;
}