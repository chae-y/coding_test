#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()<3)  return 0;
    sort(A.begin(), A.end());
    for(int i=A.size()-1; i>1; i--){
        long long n = (long long)A[i-1]+A[i-2];
        if(A[i]<n){
            return 1;
        }
    }
    return 0;
}