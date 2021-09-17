#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<pair<string,int>,pair<int,int>>> v;
vector<pair<int,int>> v2;

bool comp(pair<pair<string,int>,pair<int,int>> a, pair<pair<string,int>,pair<int,int>> b){
    if(a.first.second != b.first.second){
        return a.first.second > b.first.second;
    }
    if(a.second.first != b.second.first){
        return a.second.first < b.second.first;
    }
    if(a.second.second != b.second.second){
        return a.second.second >b.second.second;
    }
    return a.first.first < b.first.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string name;
        int korean, english, math;
        cin >> name >> korean >> english >> math;
        v.push_back({{name, korean}, {english, math}});
    }

    sort(v.begin(), v.end(), comp);

    for(int i=0; i<n; i++){
        cout<<v[i].first.first<<"\n";
    }
}