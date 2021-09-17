#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    int result = 0;

    if(n <= k){
        cout << 0;
        return 0;
    }
    while(1){
        int temp = n;
        int cnt = 0;
        while(temp){
            if(temp % 2){
                cnt++;
            }
            temp /= 2;
        }
        if(cnt<=k)  break;
        result++;
        n++;
    }
    cout<<result;
    return 0;
}