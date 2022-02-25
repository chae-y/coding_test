int left_max[100000]={0,};
int right_max[100000]={0,};
int result = 0;

int solution(vector<int> &A) {
    // // write your code in C++14 (g++ 6.2.0)
    if(A.size()==3) return 0;
    for(int i=1; i<A.size()-1; i++)
        left_max[i] = max(left_max[i-1]+A[i], 0);
    for(int i = A.size()-1; i > 1; i--)
        right_max[i - 1] = max(right_max[i]+A[i-1], 0);
    for(int i = 1; i < A.size()-1; i++)
        result = max(left_max[i-1] + right_max[i+1], result);
    return result;
}