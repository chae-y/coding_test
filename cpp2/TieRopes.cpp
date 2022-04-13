int solution(int K, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int now = 0;
    int result = 0;
    for(int i=0; i<A.size(); i++){
        now+=A[i];
        if(now>=K){
            result ++;
            now=0;
        }
    }
    return result;
}