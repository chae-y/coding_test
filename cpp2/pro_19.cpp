//카카오 프렌즈 컬러링북
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    bool visited[100][100] = {0, };
    int dx[4] = {0,0,-1,1};
    int dy[4] = {1,-1,0,0};
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(picture[i][j] && !visited[i][j]){
                int cnt = 1;
                int color = picture[i][j];
                queue<pair<int,int>> q;
                q.push({i,j});
                visited[i][j]=1;
                while(!q.empty()){
                    pair<int,int> now = q.front();
                    q.pop();

                    for(int k=0; k<4; k++){
                        int x = dx[k]+now.first;
                        int y = dy[k]+now.second;

                        if(x<0 || x>=m) continue;
                        if(y<0 || y>=n) continue;
                        if(color!=picture[x][y])    continue;
                        if(visited[x][y])   continue;

                        visited[x][y]=1;
                        cnt++;
                        q.push({x,y});
                    }
                }
            
                max_size_of_one_area = max(max_size_of_one_area, cnt);
                number_of_area++;
            }
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}