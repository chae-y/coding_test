#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin>>n;
    long long result =0;
    for(long long i=1; i<n; i++){
        result+=((n+1)*i);
    }
    cout<<result;

    return 0;
}