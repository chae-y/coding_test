#include <iostream>

using namespace std;

int parent[100001]={0, };

int find(int n){
    if(!parent[n])    return parent[n] = n;
    if(parent[n] == n)  return parent[n] = find(n-1);
    return parent[n] = find(parent[n]);
}

int main(){
    cin.tie(NULL);
	cin.sync_with_stdio(false);
    int g,p;
    cin>>g>>p;
    int result = 0;
    // int escape = false;

    for(int i=0; i<p; i++){
        int temp;
        cin>>temp;
        // if(escape)  continue;
        parent[temp] = find(temp);
        result++;
        if(parent[temp] == 0){
            // escape = true;
            result--;
            break;
        }
    }
    cout<<result;
    return 0;
}