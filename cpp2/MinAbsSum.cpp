#include<cmath>

int n;
int arr[2000001]={0,};

void pluss(int i, int sum, vector<int> &A){
    if(arr[sum])    return;
    arr[sum] ++;
    for(int j=i+1; j<n; j++){
        pluss(j, sum+abs(A[j]), A);
    }
    return;
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int sum = 0;
    n=A.size();
    for(int i=0; i<n; i++){
        sum+=abs(A[i]);
    }
    for(int i=0; i<n; i++){
        pluss(i,abs(A[i]), A);
    }
    if(sum%2==0){
        for(int i=0; i<=sum/2; i++){
            if(arr[sum/2-i] || arr[sum/2+i]){
                return 2*i;
            }
        }
    }else{
        for(int i=0; i<=sum/2+1; i++){
            if(arr[sum/2-i]){
                return 2*i+1;
            }
            if( arr[sum/2+i]){
                return 2*i-1;
            }
        }
    }
    return 0;
}