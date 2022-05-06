#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    int temp = 0;
    int now = 0;
    while(now<10){
        if(now!=numbers[temp]){
            answer+=now;
        }
        else    temp++;
        now++;
    }
    return answer;
}