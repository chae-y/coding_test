#include<iostream>
#include<vector>

using namespace std;

vector<int> v;
int k, n;
long long result = 0;

void binary(long long s, long long e){
    if(s>e){
        return;
    }
    long long mid = (s+e)/2;
    if(mid == 0)    return;
    int count = 0;
    for(int i=0; i<k; i++){
        count += v[i]/mid;
    }
    if(count>=n){
        binary(mid+1, e);
        result = max(result,mid);
    }else{
        binary(s, mid-1);
    }
}

int main(){

    cin>>k>>n;
    long long sum = 0;
    for(int i=0; i<k; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
        sum+=temp;
    }
    binary(1,sum/n);

    cout<<result;
    return 0;
}