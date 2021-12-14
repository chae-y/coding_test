#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    while(!(a==0 && b==0 && c==0)){
        if(a>=b && a>=c){
            if(a*a==b*b+c*c)    cout<<"right\n";
            else cout<<"wrong\n";
        }
        else if(b>=a && b>=c){
            if(b*b==a*a+c*c)    cout<<"right\n";
            else cout<<"wrong\n";
        }
        else if(c>=b && c>=a){
            if(c*c==b*b+a*a)    cout<<"right\n";
            else cout<<"wrong\n";
        }
        cin>>a>>b>>c;
    }
    return 0;
}