#include <string>
#include <vector>

#define MAX 1000000007

using namespace std;

int dp[101][101] = {0, };
int pud[101][101] = {0, };

int solution(int m, int n, vector<vector<int>> puddles) {
    for(int i=0; i<puddles.size(); i++){
        pud[puddles[i][0]][puddles[i][1]] = 1;
    }
    
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(i==1 && j==1)  dp[i][j] = 1;
            else{
                if(pud[i-1][j]&& pud[i][j-1]) dp[i][j] = 0;
                else if(pud[i-1][j]) dp[i][j] = dp[i][j-1] % MAX;
                else if(pud[i][j-1]) dp[i][j] = dp[i-1][j] % MAX;
                else dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MAX;
            }
        }
    }
    return dp[m][n];
}
