#include <iostream>

using namespace std;

int gcd(int x, int y){
    if((x % y) == 0)    return y;
    else return gcd(y, x % y);   
}

int main(){
    int a, b;
    int c, d;
    cin >> a >> b;
    cin >> c >> d;

    int down = b * d;
    int up = a *d + b *c;

    int x = gcd(down, up);

    down /= x;
    up /= x;

    cout << up << " " << down;
    return 0;
}