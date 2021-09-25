#include <iostream>
#include <queue>

using namespace std;

int arr[10000] = {0, };
queue<pair<int,int>> q;
int visited[10000]={0,};

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a, b;
    cin>>a>>b;
    a--;
    b--;

    q.push({a,0});
    visited[a] = 1;

    while(!q.empty()){
        int now = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(now == b){
            cout<<cnt;
            return 0;
        }
        int next =now;
        while(next+arr[now]<=b){
            next+=arr[now];
            if(!visited[next]){
                visited[next]=1;
                q.push({next, cnt+1});
            }
        }
        next = now;
        while(next-arr[now]>0){
            next-=arr[now];
            if(!visited[next]){
                visited[next]=1;
                q.push({next, cnt+1});      
            }
        }
    }

    cout<<-1;

    return 0;
}