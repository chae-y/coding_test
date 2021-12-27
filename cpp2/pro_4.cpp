#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> v[300000];
vector<long long> aa;
long long answer = 0;

int DFS(int now, int parent){//깊이우선탐색
    for(int i=0; i<v[now].size(); i++){
        if(v[now][i]!=parent){
            DFS(v[now][i], now);
        }
    }
    aa[parent] += aa[now]; 
    answer += abs(aa[now]);
    return 0;
}

long long solution(vector<int> a, vector<vector<int>> edges) {
    
    aa.assign(a.begin(), a.end()); 
    
    //벡터에 간선 저장
    for(int i=0; i<edges.size(); i++){
        v[edges[i][0]].push_back(edges[i][1]);
        v[edges[i][1]].push_back(edges[i][0]);
    }
    
    DFS(0,0);
    cout<<answer;
    if(aa[0])    return -1;
    
    return answer;
}