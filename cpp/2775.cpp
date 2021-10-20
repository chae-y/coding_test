#include <iostream>

using namespace std;

int sol(int k, int n){
    int temp= k+n;
    int answer = 1;
    for(int i = 1; i<n; i++){
        answer*=temp;
        temp--;
        answer/=i;
    }
    return answer;
}

int main(){
    int t;
    int k,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>k>>n;
        cout<<sol(k,n)<<"\n";
    }
    return 0;
}