#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<pair<int,int>> jam;
vector<int> bag;
priority_queue<int> pq;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        int m, v;
        cin>>m>>v;

        jam.push_back({m,v});
    }
    for(int i=0; i<k; i++){
        int tmp;
        cin>>tmp;
        bag.push_back(tmp);
    }

    sort(bag.begin(), bag.end());
    sort(jam.begin(), jam.end());
    
    int now = 0;
    long long result = 0;

    for(int i=0; i<n; i++){
        if(bag[now]>=jam[i].first){
            pq.push(jam[i].second);
        }
        else {
            i--;
            now++;
            if(!pq.empty()){
                result += pq.top();
                pq.pop();
            }
        }
        if(now>=k){
            cout<<result;
            return 0;
        }
    }

    if(!pq.empty())
        result += pq.top();
    
    cout<<result;


    return 0;
}