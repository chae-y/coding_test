#include<iostream>
#include<list>

using namespace std;


int main(){
    string s;
    cin>>s;
    list<char> l;
    for(int i=0; i<s.size(); i++){
		l.push_back(s.at(i));
	}
    auto cursor = l.end();
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string temp;
        cin>>temp;
        if(temp[0] == 'P'){
            char c;
            cin>>c;
            l.insert(cursor, c);
        }else if(temp[0] == 'L'){
            if(cursor!= l.begin()) cursor--;
        }else if(temp[0] == 'D'){
            if(cursor!= l.end()) cursor++;
        }else{
            if(cursor!=l.begin())
				cursor = l.erase(--cursor);
        }
    }
    for(auto &x:l){
        cout<<x;
    }
    return 0;
}