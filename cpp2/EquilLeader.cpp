#include <map>

int solution(vector<int> &A) {
    map<int, int> m;
    int reader;
    int cnt = -1;
    for(int i=0; i<A.size(); i++){
        if(m.find(A[i])==m.end())  m.insert({A[i],1});
        else    m[A[i]]++;
        if(m[A[i]]>A.size()/2){
            reader = A[i];
            cnt = m[A[i]];
        }
    }
    if(cnt==-1) return 0;
    int answer = 0;
    int temp=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]==reader)    temp++;
        if((i+1)/2<temp && (A.size()-i-1)/2<cnt-temp)   answer++;
    }
    return answer;
}
