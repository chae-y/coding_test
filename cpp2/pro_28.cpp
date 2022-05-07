#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int now = (100-progresses[0]+speeds[0]-1)/speeds[0];
    int cnt = 1;
    for(int i=1; i<progresses.size(); i++){
        int temp = (100-progresses[i]+speeds[i]-1)/speeds[i];
        if(now<temp){
            answer.push_back(cnt);
            cnt=1;
            now = temp;
        }else{
            cnt++;
        }
    }
    answer.push_back(cnt);
    return answer;
}