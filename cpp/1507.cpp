#include <iostream>

using namespace std;

int n;
int arr[20][20] = {0, };
int result[20][20] = {0, };

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //플로이드 와샬
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(i==k || j==k)    continue;
                if(arr[i][j] > arr[i][k]+arr[k][j]){
                    cout<<-1;
                    return 0;
                }
                if(arr[i][j] == arr[i][k]+arr[k][j]){
                    result[i][j] = 1;
                }
            }
        }
    }
    int answer = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(!result[i][j])
                answer+=arr[i][j];
        }
    }
    cout<<answer;
    return 0;
}