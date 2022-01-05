#include <cmath>
#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    for(int i=0; i<A.size(); i++){
        A[i]=abs(A[i]);
    }
    sort(A.begin(), A.end());
    unique(A.begin(), A.end());
    for(int i=1; i<A.size(); i++){
        if(A[i-1]>=A[i])    return i;
    }
    return A.size();
}