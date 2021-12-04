#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int result = 0;
    for(int i=0; i<n; i++){
        result += s[i]-'0';
    }
    cout<<result;
    return 0;
}