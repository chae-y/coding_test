#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n){
    if(n == 2)  return true;
    for(int i=2; i<int(sqrt(n))+1; i++){
        if(n%i==0)    return false;
    }
    return true;
}

int main(){
    int m,n;
    cin>>m>>n;

    for(int i=m ; i<=n; i++){
        if(is_prime(i)){
            cout<<i<<"\n";
        }
    }

    return 0;
}