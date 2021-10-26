#include<iostream>

using namespace std;

int main(){
    int a,b,c,d;
    int sum;
    int result = 0;
    for(int i=0; i<2; i++){
        cin>>a>>b>>c>>d;
        sum = a+b+c+d;
        result = max(result, sum);
    }
    cout<<result;
    return 0;
}