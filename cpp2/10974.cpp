#include<iostream>

using namespace std;

int n;
bool arr[9]={0,};

int start(int cnt, string s){
    if(cnt == n){
        cout<<s<<"\n";
        return 0;
    }
    for(int i=1; i<=n; i++){
        if(!arr[i]){
            arr[i] = true;
            start(cnt+1, s+to_string(i)+" ");
            arr[i] = false;
        }
    }
    return 0;
}

int main(){
    cin>>n;
    start(0,"");
    return 0;
}