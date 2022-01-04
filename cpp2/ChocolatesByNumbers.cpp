int gcd(int a, int b){
    if(b==0)    return a;
    return gcd(b,a%b);
}

int solution(int N, int M) {
    // write your code in C++14 (g++ 6.2.0)
    return N/gcd(N,M);
}