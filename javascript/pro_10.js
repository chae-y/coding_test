function solution(n, money) {
    var answer = 0;
    money = money.sort((a,b)=>a-b);
    let dp = new Array(n+1).fill(0);
    dp[0] = 1;
    for(let m of money){
        for(let i=1; i<=n; i++){
            if(i-m>=0){
                dp[i] += dp[i-m];
                dp[i] %= 1000000007;
            }
        }
    }
    return dp[n]%=1000000007;
}