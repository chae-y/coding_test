#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int N,m,M,T,R; //N운동시간 m보다 낮아지면 안돼 M보다커지면 안돼 T증가 R감소 
    cin>>N>>m>>M>>T>>R;
    
    if(M-m<T){
        cout<<-1;
        return 0;
    }
    int heart = m;
    int time = 0;
    while(N>0){
        if(M-heart >= T){
            heart+=T;
            N--;
        }
        else if(heart-m >= R){
            heart-=R;
        }else{
            heart = m;
        }
        time++;
    }
    cout<<time;

    return 0;
}