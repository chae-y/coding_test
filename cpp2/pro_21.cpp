//피로도
#include <string>
#include <vector>

using namespace std;

bool visited[8]={0,};
int answer = 0;

void dfs(int remain, vector<vector<int>> dungeons, int cnt){
    answer = max(answer,cnt);
    for(int i=0; i<dungeons.size(); i++){
        if(remain>=dungeons[i][0] && !visited[i]){
            visited[i]=1;
            dfs(remain-dungeons[i][1],dungeons, cnt+1);
            visited[i]=0;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    for(int i=0; i<dungeons.size(); i++){
        if(k>=dungeons[i][0]){
            visited[i]=1;
            dfs(k-dungeons[i][1],dungeons,1);
            visited[i]=0;
        }
    }
    return answer;
}