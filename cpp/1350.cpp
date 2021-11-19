#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[51]={0,};
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    long long cluster;
    cin>>cluster;
    long long result=0;
    for(int i=0; i<n; i++){
        result+=((arr[i]+cluster-1)/cluster);
    }
    cout<<result*cluster;
    return 0;
}