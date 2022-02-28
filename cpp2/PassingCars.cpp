int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int east = 0;
    int west = 0;
    int result = 0;
    for(int i=0; i<A.size(); i++){
        if(A[i]){
            west++;
            result += east*west;
            if(result>1000000000)   return -1;
            west=0;
        }
        else{
            east++;
        }
    }
    return result;
}