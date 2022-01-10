vector<int> fibo;

void fibonacci(int n){
    fibo.push_back(0);
    fibo.push_back(1);
    int now = 2;
    while(1){
        if(fibo[now-1]+fibo[now-2]>n)
            break;
        fibo.push_back(fibo[now-1]+fibo[now-2]);
        now++;
    }
}

int dp[100001]={0,};

int solution(vector<int> &A) {
    fibonacci(A.size()+1);
    fill_n(dp,100001,999999999);
    for(int i=0; i<fibo.size(); i++){
        dp[fibo[i]-1]=1;
    }
    if(dp[A.size()]!=999999999)  return 1;
    for(int i=0; i<A.size(); i++){
        if(A[i]==1){
            if(dp[i]==1)    continue;
            for(int j=2; j<fibo.size(); j++){
                if(i-fibo[j]<0)  break;
                if(A[i-fibo[j]]==1){
                    dp[i] = min(dp[i-fibo[j]]+1,dp[i]);
                }
            }
        }
    }
    for(int j=2; j<fibo.size(); j++){
        if(A.size()-fibo[j]<0)  break;
        if(A[A.size()-fibo[j]]==1){
            dp[A.size()] = min(dp[A.size()-fibo[j]]+1,dp[A.size()]);
        }
    }

    if(dp[A.size()]==999999999)    return -1;
    return dp[A.size()];
}