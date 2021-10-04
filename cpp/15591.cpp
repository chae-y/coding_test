#include <iostream>
#include <vector>

using namespace std;

vector<pair<int,int>> v[5001];
int visited[5001] = {0, };
int count =0;

int start(int a, int b, int c){
    for(int i=0; i<v[b].size(); i++){
        if(!visited[v[b][i].first]){
            visited[v[b][i].first] = 1;
            if(min(c, v[b][i].second) >= a) count++;
            start(a, v[b][i].first, min(c, v[b][i].second));
        }
    }
    return 0;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin>>n>>q;

    for(int i=0; i<n-1; i++){
        int p,q,r;
        cin>>p>>q>>r;
        v[p].push_back({q, r});
        v[q].push_back({p, r});
    }

    for(int i=0; i<q; i++){
        int k,v;
        cin>>k>>v;
        fill_n(visited, 5001, 0);
        count = 0;
        visited[v] = 1;
        start(k, v, k+1);
        cout<<"answer : "<<count<<endl;
    }

    return 0;
}