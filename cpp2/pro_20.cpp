//메뉴 리뉴얼
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

map<string, int> m;
int maxOrder;

void make(string order, int courseNum, string now, int n){
    int i=0;
    if(now.size()==courseNum){
        if(m.find(now)==m.end()){
            m[now]=1;
        }else{
            m[now]++;
            maxOrder = max(maxOrder, m[now]);
        }
    }else{
        for(int i=n+1; i<order.size(); i++){
            make(order, courseNum, now+order[i], i);
        }
    }
    return;
}

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    
    for(string &order : orders){
        sort(order.begin(), order.end());
    }
    
    for(int j=0; j<course.size(); j++){
        maxOrder = 0;
        for(int i=0; i<orders.size(); i++){
            for(int k=0; k<orders[i].size(); k++){
                string temp = "";
                temp+=orders[i][k];
                make(orders[i],course[j],temp,k);
            }
        }
        if(maxOrder<2)  continue;
        for(auto it = m.begin(); it!=m.end(); it++){
            if(it->second == maxOrder)  answer.push_back(it->first);
        }
        m.clear();
    }
    sort(answer.begin(), answer.end());
    return answer;
}