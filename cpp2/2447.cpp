#include<iostream>

using namespace std;

int n;

int star(int a, int b, int c){
    if(a/c%3 == 1 && b/c%3 == 1){
        cout<<" ";
    }else if(c/3 == 0){
        cout<<"*";
    }else{
        star(a,b,c/3);
    }
    return 0;
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            star(i,j,n);
        }
        cout<<"\n";
    }
    return 0;
}