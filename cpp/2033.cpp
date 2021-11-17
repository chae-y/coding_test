#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int m=10;
    while(n>m){
        int temp = n%m;
        n-=temp;
        if(temp>=5*m/10)
            n+=m;
        m*=10;
    }
    cout<<n;
}