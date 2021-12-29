#include<iostream>

using namespace std;

int n,k;
int result;

int binarySearch(int start, int end){
    if(start>end)   return 0;
    int mid = (start+end)/2;
    int cnt = 0;
    int same = 0;
    for(int i=1; i<=n; i++){
        cnt+=min(mid/i, n);
        if(cnt >= k){
            result = mid;
            binarySearch(start, mid-1);
            return 0;
        }
    }
    binarySearch(mid+1, end);
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>k;
    int end;
    if((long long)n*(long long)n>1000000000){
       end = 1000000000;
    }else{
        end = n*n;
    }
    binarySearch(1, end);

    cout<<result;

    return 0;
}
