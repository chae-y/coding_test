//오픈채팅창
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<string,string>> io;
    map<string,string> uid;
    for(int i=0; i<record.size(); i++){
        if(record[i][0]=='E'){
            string num;
            string name;
            int j;
            for(j=6; j<record[i].size(); j++){
                if(record[i][j]==' ')   break;
                num+=record[i][j];
            }
            j++;
            name = record[i].substr(j);
            uid[num] = name;
            io.push_back({num,"in"});
            // if(uid.find(num)==uid.end())    uid[]
        }else if(record[i][0]=='C'){
            string num;
            string name;
            int j;
            for(j=7; j<record[i].size(); j++){
                if(record[i][j]==' ')   break;
                num+=record[i][j];
            }
            j++;
            name = record[i].substr(j);
            uid[num] = name;
        }else{
            string num;
            string name;
            for(int j=6; j<record[i].size(); j++){
                num+=record[i][j];
            }
            io.push_back({num,"out"});
        }
    }
    for(int i=0; i<io.size(); i++){
        string temp = uid[io[i].first];
        if(io[i].second=="in") temp+="님이 들어왔습니다.";
        else    temp+="님이 나갔습니다.";
        answer.push_back(temp);
    }
    return answer;
}