//신고 결과 받기
#include <string>
#include <vector>
#include <map>
#include<iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector<int> reportFrom;
    for(int i=0; i<id_list.size(); i++){
        answer.push_back(0);
        reportFrom.push_back(0);
    }
    int arr[1000][1000] = {0,};
    
    map<string,int> m;
    for(int i=0; i<id_list.size(); i++){
        m[id_list[i]]=i;
    }
    
    for(int i=0; i<report.size(); i++){
        string from = "";
        string to = "";
        bool start = true;
        for(int j=0; j<report[i].size(); j++){
            if(report[i][j]==' '){
                start = false;
                continue;
            }
            if(start)   from+=report[i][j];
            else    to+=report[i][j];
        }
        if(!arr[m[from]][m[to]]){
            arr[m[from]][m[to]]++;
            reportFrom[m[to]]++;
        }
    }
    
    for(int i=0; i<id_list.size(); i++){
        if(reportFrom[i]>=k){
            for(int j=0; j<id_list.size(); j++){
                if(arr[j][i])   answer[j]++;
            }
        }
    }
    return answer;
}