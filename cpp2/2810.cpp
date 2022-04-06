#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=0; i<N; i++){
        if(s[i]=='L'){
            cnt++;
        }
    }
    int answer = N+1 - cnt/2;
    if(answer==N+1) answer=N;
    cout<<answer;
    return 0;
}