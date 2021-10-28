#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N;//(0,50) 크레인 수
vector<int> crane,box;
int M;//(0,10000) 박스 수

bool comp(int a, int b){
    return a>b;
}

void input(){
    cin>>N;
    for(int i=0; i<N; i++){
        int temp;
        cin>>temp;
        crane.push_back(temp);
    }
    sort(crane.begin(), crane.end(), comp);
    cin>>M;
    for(int i=0; i<M; i++){
        int temp;
        cin>>temp;
        box.push_back(temp);
    }
    sort(box.begin(), box.end(), comp);
}

int main(){
    input();
    
    int result = 0;

    if(box[0] > crane[0]){
        cout<<-1;
        return 0;
    }

    while(!box.empty()){
        result++;
        for(int i=0; i<crane.size(); i++){
            for(int j=0; j<box.size(); j++){
                if(crane[i]>=box[j]){
                    box.erase(box.begin()+j);
                    break;
                }
            }
        }
    }
    cout<<result;

    return 0;
}