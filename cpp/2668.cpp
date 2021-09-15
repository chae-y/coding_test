#include <iostream>
#include <vector>

using namespace std;

int arr[101] = {0, };
int visited[101] = {0, };
int result[101] = {0, };

int dfs(int cur, int end){
    visited[cur] = 1;
    if(!visited[arr[cur]]){
        dfs(arr[cur], end);
    }
    else if(arr[cur] == end){
        result[cur] = 1;
    }
    return 0;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<=n; i++){
        fill_n(visited, n+1, 0);
        dfs(i, i);
    }
    vector<int> v;
    for(int i=1; i<=n; i++){
        if(result[i]==1)    v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

}