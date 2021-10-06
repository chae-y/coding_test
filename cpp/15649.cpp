#include <iostream>

using namespace std;

int n, m;
int visited[10]={0, };

int backtracking(int a, int b, string s){
    s+=to_string(a);
    s+=" ";
    visited[a] = 1;
    if(b == m){
        cout<<s<<"\n";
        visited[a] = 0;
        return 0;
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]) backtracking(i, b+1, s);
    }
    visited[a]=0;
    return 0;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        backtracking(i, 1, "");
    }
    return 0;
}