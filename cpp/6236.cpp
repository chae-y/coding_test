#include <iostream>

using namespace std;

int N, M;

int main(){

    cin>>N>>M;
    int arr[100000]={0,};
    int start = 0;
    int end = 10000*N;

    for(int i=0; i<N; i++){ 
        cin>>arr[i];
        start = max(start, arr[i]);
    }
    
    int result;

    while(start<=end){
        int mid = (start+end)/2;
        int now = 0;
        int count = 0;

        for(int i=0; i<N; i++){
            if(now<arr[i]){
                now = mid;
                count++;
            }
            now-=arr[i];
        }

        if(count<=M){
            end = mid-1;
            result = mid;
        }else{
            start = mid+1;
        }
    }

    cout<<result;

    return 0;
}