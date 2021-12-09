#include<iostream>
#include<algorithm>


using namespace std;

string s;

string sol(int a, int b){
    string str=s;
    // cout<<a<<b<<" ";
    reverse(str.begin(), str.begin()+a);
    reverse(str.begin()+a, str.begin()+b);
    reverse(str.begin()+b, str.end());
    // cout<<str<<endl;
    return str;
}

int main(){
    cin>>s;

    string result = sol(1,2);

    for(int i=1; i<s.size()-1; i++){
        for(int j=i+1; j<s.size(); j++){
            result = min(result, sol(i,j));
        }
    }

    cout<<result;

    return 0;
}