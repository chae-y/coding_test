#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> pq (works.begin(), works.end());
    for(int i=0; i<n; i++){
        if(pq.empty())  return 0;
        int temp = pq.top();
        pq.pop();
        if(temp!=0)
         pq.push(temp-1);
    }
    while(!pq.empty()){
        answer += pq.top()*pq.top();
        pq.pop();
    }
    return answer;
}