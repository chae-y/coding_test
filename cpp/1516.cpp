#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N;
vector<int> v[500];
int time[500] = {0, };

int build(int n){
    if(time[n]!=0){
        return time[n];
    }
    int max_time = 0;
    for(int i=1; i<v[n].size(); i++){
        max_time = max(max_time,build(v[n][i]));
    }
    return time[n] = max_time+v[n][0]+1;
}

int main(){

    cin>>N;

    for(int i=0; i<N; i++){
        int temp;
        cin>>temp;
        while(temp != -1){
            v[i].push_back(temp-1);
            cin>>temp;
        }
    }

    for(int i=0; i<N; i++){
        cout<<build(i)<<endl;
    }
    return 0;
}