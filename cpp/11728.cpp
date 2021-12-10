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
    vector<int> v;
    for(int i=0; i<a; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int n=0;
    int temp;
    for(int j=0; j<b; j++){
        cin>>temp;
        while(v[n]<temp && n<a){
            cout<<v[n]<<" ";
            n++;
        }
        cout<<temp<<" ";
    }
    while(n<a){
        cout<<v[n]<<" ";
        n++;
    }

    return 0;
}