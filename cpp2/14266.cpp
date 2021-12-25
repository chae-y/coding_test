#include<iostream>
#include<queue>

using namespace std;

int main(){
    int s;
    cin>>s;

    queue<pair<int,pair<int,int>>> q;//임티수, 복사, 시간
    q.push({1,{0,0}});
    
    bool visited[1001][1001] = {0,};//임티수, 복사수

    int time;
    while(!q.empty()){
        int cnt = q.front().first;
        int copy = q.front().second.first;
        time = q.front().second.second;
        q.pop();

        if(cnt!=0 && !visited[cnt][cnt]){
            visited[cnt][cnt]=true;
            q.push({cnt,{cnt,time+1}});
        }
        if(copy!=0 && cnt+copy <1001 && !visited[cnt+copy][copy]){
            visited[cnt+copy][copy]=true;
            if(cnt+copy == s)   break;
            q.push({cnt+copy,{copy, time+1}});
        }
        if(cnt>2 && !visited[cnt-1][copy]){
            visited[cnt-1][copy] = true;
            if(cnt-1 == s)  break;
            q.push({cnt-1,{copy, time+1}});
        }
    }
    cout<<time+1;
    return 0;
}