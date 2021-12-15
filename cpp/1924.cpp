#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int sum = 0;
    string week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    switch(a){
        case 12:
            sum+=30;
        case 11:
            sum+=31;
        case 10:
            sum+=30;
        case 9:
            sum+=31;
        case 8:
            sum+=31;
        case 7:
            sum+=30;
        case 6:
            sum+=31;
        case 5:
            sum+=30;
        case 4:
            sum+=31;
        case 3:
            sum+=28;
        case 2:
            sum+=31;
    }
    cout<<week[(sum+b)%7];
    return 0;
}