#include <iostream>

using namespace std;

int main(){
    int arr[101]={0, };
    int n;
    cin>>n;
    int result=0;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(arr[temp]){
            result++;
        }else{
            arr[temp]=1;
        }
    }
    cout<<result;
    return 0;
}