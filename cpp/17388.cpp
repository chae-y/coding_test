#include <iostream>

using namespace std;

int main(){
    int soongsil, korea, hanyang;

    cin>>soongsil>>korea>>hanyang;

    if(soongsil+korea+hanyang >= 100){
        cout<<"OK";
        return 0;
    }
    if(soongsil<korea && soongsil<hanyang){
        cout<<"Soongsil";
        return 0;
    }
    if(korea<soongsil && korea<hanyang){
        cout<<"Korea";
        return 0;
    }
    cout<<"Hanyang";
    return 0;
}