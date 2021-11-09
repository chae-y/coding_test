#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, l;
    cin>>n>>l;

    int num =0;
    for(int i=0; i<n; i++){
        while (to_string(++num).find(l) != string::npos);
    }
    cout<<num;

    return 0;
}