#include<iostream>
#include<queue>

using namespace std;

bool visited[300][300]={0,};
int dx[8] = {-2,-1,1,2,-2,-1,1,2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};

int main(){
    int k;
    cin>>k;
    for(int i=0; i<k; i++){
        int n;
        cin>>n;
        fill_n(visited[0], 90000, 0);
        queue<pair<pair<int,int>,int>> q;
        int x,y;
        cin>>x>>y;
        q.push({{x,y},0});
        visited[x][y] = true;
        cin>>x>>y;
        bool end = false;
        if(x==q.front().first.first && y== q.front().first.second){
            cout<<0<<"\n";
            end = true;
        }
        while(!q.empty()){
            int nowX = q.front().first.first;
            int nowY = q.front().first.second;
            int cnt = q.front().second;
            q.pop();
            for(int j=0; j<8; j++){
                int nextX = nowX+dx[j];
                int nextY = nowY+dy[j];

                if(nextX<0 || nextX>=n || nextY<0 || nextY>=n){
                    continue;
                }

                if(visited[nextX][nextY])   continue;

                if(nextX==x && nextY == y){
                    cout<<cnt+1<<"\n";
                    end = true;
                    break;
                }
                visited[nextX][nextY] = true;
                q.push({{nextX, nextY},cnt+1});
            }
            if(end) break;
        }
    }
    return 0;
}