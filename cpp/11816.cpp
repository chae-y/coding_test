#include<iostream>
#include<math.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int result = 0;
    int len = s.size();
    if(s[0] == '0'){
        if(s[1]=='x'){
            for(int i=2; i<len; i++){
                if('0'<=s[i] && s[i]<='9')
                    result += pow(16, len-1-i)*(s[i]-'0');
                if('a'<=s[i] && s[i]<='f')
                    result += pow(16, len-1-i)*(s[i]-'a'+10);
            }
        }
        else{
                for(int i=1; i<len; i++){
                result += pow(8, len-1-i)*(s[i]-'0');
            }
        }
    }
    else{
        for(int i=0; i<len; i++){
            result += pow(10, len-1-i)*(s[i]-'0');
        }
    }
    cout<<result;
    return 0;
}