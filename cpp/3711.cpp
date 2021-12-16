#include <iostream>

using namespace std;

int arr[300] = {0,};
int visited[1000000] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        int result=n;
        bool success=false;
        int k=0;
        while(true){
            fill_n(visited,result,0);
            for(k=0; k<n; k++){
                int temp = arr[k]%result;
                if(visited[temp])
                    break;
                else{
                    visited[temp]=1;
                }
                if(k==n-1)  success = true;
            }
            if(success){
                cout<<result<<"\n";
                break;
            }
            result++;
        }
    }
    return 0;
}