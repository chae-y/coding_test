#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[1000][3] = {0, };
int dp[1000][3] = {0, };
int result = 999999999;
int n;

int solve(){
    for(int i=2; i<n; i++){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + arr[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + arr[i][1];
        dp[i][2] = min(dp[i-1][1], dp[i-1][0]) + arr[i][2];
    }
    return 0;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            int temp;
            cin>>temp;
            arr[i][j] = temp;
        }
    }

    dp[1][0] = 999999999;
    dp[1][1] = arr[0][0] +arr[1][1];
    dp[1][2] = arr[0][0] +arr[1][2];

    solve();
    
    result = min(result, min(dp[n-1][1], dp[n-1][2]));

    dp[1][0] = arr[0][1] +arr[1][0];
    dp[1][1] = 999999999;
    dp[1][2] = arr[0][1] +arr[1][2];

    solve();

    result = min(result, min(dp[n-1][0], dp[n-1][2]));

    dp[1][0] = arr[0][2] +arr[1][0];
    dp[1][1] = arr[0][2] +arr[1][1];
    dp[1][2] = 999999999;

    solve();

    result = min(result, min(dp[n-1][0], dp[n-1][1]));

    cout<<result;
    return 0;
}