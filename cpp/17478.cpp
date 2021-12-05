#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(), v. end());

    v.erase(unique(v.begin(), v. end()), v.end());

    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}