#include <iostream>

using namespace std;

int main(){
    int m,d;
    cin>>m>>d;

    int num = 2;
    string result[3] = {"Before", "After", "Special"};
    if(m<2){
        num = 0;
    }else if(m==2 && d<18){
        num = 0;
    }else if(m==2 && d== 18){
        num = 2;
    }else{
        num=1;
    }
    cout<<result[num];
    return 0;
}