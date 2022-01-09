vector<int> solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> answer;
    int arr[100001] = {0,};
    for(int i=0; i<A.size(); i++){
        arr[A[i]]++;
    }
    for(int i=0; i<A.size(); i++){
        int cnt=A.size();
        for(int j=1; j*j<=A[i]; j++){
            if(j*j == A[i])  cnt-=arr[j];
            else if(A[i]%j==0)   cnt-=(arr[j]+arr[A[i]/j]);
        }
        answer.push_back(cnt);
    }
    return answer;
}