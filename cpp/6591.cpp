#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int i, n;

    while(1){
        cin>>n>>i;
        if(n==0 && i==0){
            return 0;
        }
        long long result = 1;
        i = min(i, n-i);

        for(int j=1; j<=i; j++){
            result *= n;
            result /= j;
            n--;
        }
        cout<<result<<endl;
    }

    return 0;
}