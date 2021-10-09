#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int l;
    int arr[50];
    cin>>l;
    for(int i=0 ;i<l; i++){
        cin >>arr[i];
    }

    sort(arr, arr + l);

    int n;
    cin>>n;

    int start = 0;
    int end = arr[l-1];
    for(int i=0; i<l; i++){
        if(arr[i]==n){
            cout<<0;
            return 0;
        }
        if(arr[i] < n){
            start =arr[i];
        }else{
            end = arr[i];
            break;
        }
    }

    int a = n-start;
    int b = end- n;

    cout<<a*b-1;

    return 0;
}