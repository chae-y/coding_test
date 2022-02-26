#include<map>

map<int,int> m;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==1) return 0;
    for(int i=0; i<A.size(); i++){
        if(m.find(A[i])!=m.end()){
            m[A[i]]++;
            if(m[A[i]]>A.size()/2)  return i;
        }else{
            m[A[i]]=1;
        }
    }
    return -1;
}