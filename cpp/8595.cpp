#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int now = 0;
    long long result = 0;
    for(int i=0; i<n; i++){
        if('0'<=s[i] && s[i]<='9'){
            now *= 10;
            now += s[i]-'0';
        }else{
            if(now/1000000>0)   now = 0;
            else{
                result += now;
                now = 0;
            }
        }
    }
    result += now;
    cout<<result;
    return 0;
}