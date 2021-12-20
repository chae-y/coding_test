#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

string s, explosion;
stack<pair<int,int>> stk;
int now = 0;

void same(int i){
    stk.push({s[i], now});
    now++;
    if(now == explosion.size()){
        for(int i=0; i<explosion.size(); i++){
            stk.pop();
        }
        if(stk.size()==0) now=0;
        else now = stk.top().second+1;
    }
    return;
}

int main(){
    cin>>s;
    cin>>explosion;

    for(int i=0; i<s.size(); i++){
        if(explosion[now]==s[i]){
            same(i);
        }
        else{
            now=0;
            if(explosion[now]==s[i])
                same(i);
            else{
                stk.push({s[i],-1});
            }
        }
    }
    int n= stk.size();
    string result ="";
    for(int i=0; i<n; i++){
        result += stk.top().first;
        stk.pop();
    }
    reverse(result.begin(), result.end());
    cout<<result;
    if(result.size()==0){
        cout<<"FRULA";
    }

    return 0;
}