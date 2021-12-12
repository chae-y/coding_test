#include<iostream>

using namespace std;

string s;
int cursor;

int main(){
    cin>>s;
    cursor = s.size();
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string temp;
        cin>>temp;
        if(temp[0] == 'P'){
            char c;
            cin>>c;
            if(cursor<s.size())
                s = s.substr(0,cursor+1)+c + s.substr(cursor+1) ;
            else
                s = s.substr(0,cursor+1)+c;
        }if(temp[0] == 'L'){
            cursor-=1;
            if(cursor<0)    cursor = 0;
        }if(temp[0] == 'D'){
            cursor+=1;
            if(cursor>s.size())   cursor=s.size();
        }else{
            if(cursor==0) continue;
            if(cursor<s.size())
                s = s.substr(0,cursor) + s.substr(cursor+1) ;
            else
                s = s.substr(0,cursor);
        }
        cout<<s<<endl;
    }
    cout<<s;
    return 0;
}