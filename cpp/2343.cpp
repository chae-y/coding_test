#include<iostream>

using namespace std;

int n,m;
int arr[100000]={0,};
int result;

int binarySearch(int start, int end){
    if(start>end)   return 0;
    int mid = (start+end)/2;
    int temp = 0;
    int num = 0;
    for(int i=0; i<n; i++){
        if(temp+arr[i]>mid){
            num++;
            temp = 0;
            i--;
        }else{
            temp+=arr[i];
        }
        if(num>m){
            binarySearch(mid+1,end);
            return 0;
        }
    }
    num++;
    if(num>m){
        binarySearch(mid+1,end);
        return 0;
    }
    result = mid;
    binarySearch(start, mid-1);
    return 0;
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int left = 0, right = n*10000;
    binarySearch(left, right);
    cout<<result;
    return 0;
}