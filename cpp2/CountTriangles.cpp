#include <algorithm>

int answer = 0;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    for(int i=0; i<A.size(); i++){
        int k=i+2;
        for(int j=i+1; j<A.size(); j++){
            while(k<A.size() && A[i]+A[j]>A[k]){
                k++;
            }
            if(k>j) answer+= k-j-1;
        }
    }
    return answer;
}