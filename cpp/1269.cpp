#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int a,b;
    cin>>a>>b;
    vector<int> v1,v2;
    for(int i=0; i<a; i++){
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }
    for(int i=0; i<b; i++){
        int temp;
        cin>>temp;
        v2.push_back(temp);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int count =0; 
    int j=0;
    for(int i=0; i<a; i++){
        if(j>=b)   break;
        if(v1[i]<v2[j]) continue;
        if(v1[i]==v2[j]) count++;
        j++;
        i--;
    }
    cout<<a+b-2*count;
    return 0;
}