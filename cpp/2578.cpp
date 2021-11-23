#include <iostream>

using namespace std;

int arr[5][5] = {0,};
int x[26] = {0,};
int y[26] = {0,};

bool bingo(){
    int result = 0;
    for(int i=0; i<5; i++){
        int sum1 = 0;
        int sum2 = 0;
        for(int j=0; j<5; j++){
            sum1 += arr[i][j];
            sum2 += arr[j][i];
        }
        if(!sum1)   result ++;
        if(!sum2)   result ++;
    }
    int sum1=0;
    int sum2=0;
    for(int i= 0; i<5; i++){
        sum1+=arr[i][i];
        sum2+=arr[i][4-i];
    }
    if(!sum1)   result ++;
    if(!sum2)   result ++;
    if(result>=3) return true;
    return false;
}

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int temp;
            cin>>temp;

            arr[i][j] = temp;
            x[temp] = i;
            y[temp] = j;
        }
    }
    int result = 0;
    for(int i=0; i<25; i++){
        int temp;
        cin>>temp;

        arr[x[temp]][y[temp]]=0;
        if(i>6 && result==0 && bingo()){
            result = i+1;
        }
    }
    cout<<result;
    return 0;
}