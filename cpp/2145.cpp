#include <iostream>

using namespace std;

string sol(string s){
    while(s.size()>1){
        int sum =0;
        for(int i=0; i<s.size(); i++){
            sum+=(s[i] - '0');
        }
        s = to_string(sum);
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    while(s != "0"){
        cout<<sol(s)<<endl;
        cin>>s;
    }
    return 0;
}