#include <iostream>

using namespace std;

int main(){
    string n;
    cin>>n;
    int count = 0;

    while(n.length()>1){
        count++;
        int sum=0;
        for(int i=0; i<n.length(); i++){
            sum+=(n[i]-'0');
        }
        n = to_string(sum);
    }
    cout<<count<<endl;

    if(n=="3" || n=="6" || n=="9"){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}