#include <iostream>

using namespace std;

int T;
int m,n;
int arr[100][100]={0,};

void solve(){
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int result = 0;
    for(int j=0; j<n; j++){
        int count = m;
        for(int i=m-1; i>=0; i--){
            if(arr[i][j]){
                count--;
                result += (count-i);
            }
        }
    }
    cout<<result<<"\n";
}

int main(){
    cin>>T;
    for(int i=0; i<T; i++){
        solve();
    }
    return 0;
}