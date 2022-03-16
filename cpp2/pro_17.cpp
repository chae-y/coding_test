//추석트래픽
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> lines) {
    int answer = 0;
    int len = lines.size();
    vector<int> start, end;
    
    for(int i=0; i<len; i++){
        int temp=0;
        temp += ((lines[i][11]-'0')*10+lines[i][12]-'0')*60*60*1000;//시
        temp += ((lines[i][14]-'0')*10+lines[i][15]-'0')*60*1000;//분
        temp += ((lines[i][17]-'0')*10+lines[i][18]-'0')*1000;//초
        temp += (lines[i][20]-'0')*100+(lines[i][21]-'0')*10+lines[i][22]-'0';//밀리초
        end.push_back(temp);
        string tmp = lines[i].substr(24);
        int time = 0;
        bool flag = false;
        int cnt = 0;
        for(int j=0; j<tmp.size(); j++){
            if(tmp[j]=='.'){
                flag = true;
                continue;
            }
            else if(tmp[j]=='s') break;
            time = time*10 + tmp[j]-'0';
            if(flag)    cnt++;
        }
        while(cnt!=3){
            time*=10;
            cnt++;
        }
        start.push_back(temp-time);
    }

    
    for(int i=0; i<len; i++){
        int section = end[i]+999;
        int cnt=1;
        for(int j=i+1; j<len; j++){
            if(section>start[j])  cnt++;
        }
        answer = max(cnt, answer);
    }
    
    return answer;
}