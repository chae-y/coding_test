#include <iostream>

using namespace std;

int n;
int arr[10000]={0, };
int dp[10000][3] = {0, };
int result = 0;

int max3(int a, int b, int c){
    return max(a, max(b, c));
}

int DP(int x, int y){
    if(x<0) return 0;
    if(dp[x][y] != -1)    return dp[x][y];
    if(y==0){
        dp[x][y] = max3(DP(x-1,0),DP(x-1,1),DP(x-1,2));
    }else{
        dp[x][y] = DP(x-1,y-1) + arr[x];
    }
    return dp[x][y];
}

int main(){
    cin>> n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    fill_n(dp[0], 30000, -1);
    result = max3(DP(n-1,0),DP(n-1,1),DP(n-1,2));
    cout<<result;
    return 0;
}