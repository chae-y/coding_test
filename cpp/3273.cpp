#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int x;
    cin>>x;
    sort(v.begin(), v.end());
    int result = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j]==x){
                result++;
                break;
            }
            if(v[i]+v[j]>x){
                break;
            }
        }
    }
    cout<<result;
    return 0;
}