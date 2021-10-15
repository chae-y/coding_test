#include <iostream>

using namespace std;

int n, m;

int sol(int i, string s, int count){
    if(count == m){
        cout<<s<<"\n";
        return 0;
    }
    s+=" ";
    for(int j=i+1; j<=n; j++){
        sol(j, s+to_string(j), count+1);
    }
    return 0;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    cin >>n>>m;

    for(int i=1; i<=n; i++){
        sol(i,to_string(i), 1);
    }
    return 0;
}