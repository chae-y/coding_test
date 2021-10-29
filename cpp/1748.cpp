#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s = to_string(n);

    int result = 0;

    for(int i=0; i<s.size()-1; i++){
        result += (i+1) * 9 * pow(10,i);
    }

    result += s.size() * (n - pow(10, s.size()-1) +1);

    cout<<result;
    return 0;
}