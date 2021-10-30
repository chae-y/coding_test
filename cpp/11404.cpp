#include<iostream>

using namespace std;

int n,m;
int cost[101][101] = {0,};

void solve(){
    //j->k인데 i가 거쳐가는거
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(cost[j][i] == 0) continue;
            for(int k=1; k<=n; k++){
                if(cost[i][k]==0) continue;
                if(j==k)    continue;
                if(cost[j][k]==0 || cost[j][k]>cost[j][i]+cost[i][k]){
                    cost[j][k]=cost[j][i]+cost[i][k];
                }
            }
        }
    }
    return;
}

int main(){
    cin>>n;
    cin>>m;
    for(int i=0; i<m; i++){
        int a,b,temp;
        cin>>a>>b>>temp;
        if(cost[a][b]!=0)   cost[a][b] = min(cost[a][b], temp);
        else    cost[a][b] = temp;
    }

    solve();

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<cost[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}