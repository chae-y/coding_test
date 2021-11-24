#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;
// int arr[51][51]={0, };
vector<int> v[51];

int solution(int num){
    int visited[51] = {0,};
    queue<pair<int,int>> q;
    q.push({num,0});
    visited[num]=1;
    int result = 0;
    while(!q.empty()){
        int now = q.front().first;
        result = q.front().second;
        q.pop();
        for(int i=0; i<v[now].size(); i++){
            if(!visited[v[now][i]]){
                visited[v[now][i]]=1;
                q.push({v[now][i],result+1});
            }
        }
    }
    return result;
}

int main(){
    cin>>n;
    int a,b;
    cin>>a>>b;
    while(!(a==-1 &&b==-1)){
        // arr[a][b] = 1;
        // arr[b][a] = 1;
        v[a].push_back(b);
        v[b].push_back(a);
        cin>>a>>b;
    }

    int result = 100;
    vector<int> p;
    for(int i=1; i<=n; i++){
        int temp = solution(i);
        // cout<<temp<<endl;
        if(result>temp){
            p.clear();
            result = temp;
            p.push_back(i);
        }else if(result == temp){
            p.push_back(i);
        }
    }
    cout<<result<<" "<<p.size()<<endl;
    for(int i=0; i<p.size(); i++){
        cout<<p[i]<<" ";
    }

    return 0;
}