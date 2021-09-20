#include <iostream>
#include <queue>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,m;
        cin>>n>>m;
        int count = 0;

        queue<pair<int,int>> q;
        priority_queue<int> pq;
        for(int j=0; j<n; j++){
            int temp;
            cin>>temp;
            q.push({temp,j});
            pq.push(temp);
        }

        while(!q.empty()){
            int rank = q.front().first;
            int idx = q.front().second;
            q.pop();
            if(pq.top() == rank){
                pq.pop();
                count++;
                if(idx == m){
                    cout<<count<<endl;
                    break;
                }
            }else{
                q.push({rank, idx});
            }
        }
    }

    return 0;
}