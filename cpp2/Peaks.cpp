int solution(vector<int> &A) {
    int N = A.size();
    int answer = 0;
    vector<int> peak;
    for(int i=1; i<A.size()-1; i++){
        if(A[i-1]<A[i] && A[i+1]<A[i]){
            peak.push_back(i);
        }
    }
    for(int i=1; i<=N; i++){
        if(N%i!=0)  continue;
        int now = i;
        bool exist = false;
        for(int j=0; j<peak.size(); j++){
            if(peak[j]<now){
                exist = true;
            }
            else{
                if(exist){
                    now+=i;
                    exist = false;
                    j--;
                }else{
                    break;
                }
            }
        }
        if(now!=N)  continue;
        if(exist)   return now/i;
    }
    return answer;
}