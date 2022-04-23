int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()<1)  return 0;
    int end = B[0];
    int answer=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]>end){
            answer++;
            end = B[i];
        }
    }
    return answer+1;
}