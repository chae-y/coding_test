#include <iostream>
#include <algorithm>

using namespace std;

int ju[100000]={0,};
int sa[100000]={0,};

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ju[i];
    }
    for(int i=0; i<n; i++){
        cin>>sa[i];
    }

    sort(ju, ju+n);
    sort(sa, sa+n);

    int count =0;
    int i=0, j=0;
    while(i!=n){
        if(sa[i]> ju[j]){
            i++; 
            j++;
            count++;
            if(count>=(n+1)/2){
                cout<<"YES";
                return 0;
            }
        }
        else{
            i++;
        }
    }
    cout<<"NO";
    return 0;
}
