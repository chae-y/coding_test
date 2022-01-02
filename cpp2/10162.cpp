#include<iostream>

using namespace std;

int main(){
    int time;
    cin>>time;
    if(time%10!=0){
        cout<<-1;
        return 0;
    }
    cout<<(time/300)<<" ";
    time%=300;
    cout<<(time/60)<<" ";
    time%=60;
    cout<<(time/10);
    return 0;
}