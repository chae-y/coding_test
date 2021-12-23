#include<iostream>

using namespace std;

int n,k;
string arr[50]={"",};
bool alpha[26] = {0, };
int result = 0;

int start(int order, int cnt){
    if(cnt==k){
        int temp = 0;
        for(int i=0; i<n; i++){
            bool read = true;
            for(int j=4; j<arr[i].size()-4; j++){
                if(!alpha[arr[i][j]-'a']){
                    read = false;
                    break;
                }
            }
            if(read)    temp++;
        }
        result = max(temp, result);
        return 0;
    }
    for(int i=order+1; i<26; i++){
        if(!alpha[i]){
            alpha[i] = true;
            start(i, cnt+1);
            alpha[i] = false;
        } 
    }
    return 0;
}

int main(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(k<5){
        cout<<0;
        return 0;
    }
    if(k==26){
        cout<<n;
        return 0;
    }
    alpha['a'-'a'] = true;
    alpha['n'-'a'] = true;
    alpha['t'-'a'] = true;
    alpha['i'-'a'] = true;
    alpha['c'-'a'] = true;
    start(0,5);
    cout<<result;
    return 0;
}