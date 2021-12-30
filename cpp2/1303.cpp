#include<iostream>

using namespace std;

int n,m;
char arr[100][100] = {0,};
bool visited[100][100] = {0,};
int blue = 0, white = 0;
int cnt = 0;

int sol(int a, int b){
    visited[a][b]=true;
    cnt++;
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    char color = arr[a][b];
    for(int i=0; i<4; i++){
        int nx = a+dx[i];
        int ny = b+dy[i];
        if(nx<0 || nx>=n || ny<0 || ny>=m){
            continue;
        }
        if(visited[nx][ny] || arr[nx][ny]!=color){
            continue;
        }
        sol(nx,ny);
    }
    return 0;
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!visited[i][j]){
                cnt = 0;
                sol(i,j);
                if(arr[i][j]=='W'){
                    white+=cnt*cnt;
                }else{
                    blue+=cnt*cnt;
                }
            }
        }
    }
    cout<<white<<" "<<blue;
    return 0;
}