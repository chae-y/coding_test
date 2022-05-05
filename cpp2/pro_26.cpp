#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    
    int j = 0;
    int same = 0;
    int zero = 0;
    for(int i=0; i<6; i++){
        if(lottos[i]==0)  zero++;
        else{
            while(lottos[i]>win_nums[j]){
                j++;
            }
            if(lottos[i]==win_nums[j])  same++;
        }
    }
    if(same+zero<2) answer.push_back(6);
    else answer.push_back(7-same-zero);
    
    if(same<2) answer.push_back(6);
    else answer.push_back(7-same);
    return answer;
}