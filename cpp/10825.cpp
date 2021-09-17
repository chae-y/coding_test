#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    int korean;
    int english;
    int math;
};

vector<student> v;

bool comp(student a, student b){
    if(a.korean != b.korean){
        return a.korean > b.korean;
    }
    if(a.english != b.english){
        return a.english < b.english;
    }
    if(a.math != b.math){
        return a.math >b.math;
    }
    return a.name < b.name;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        student st;
        cin >> st.name >> st.korean >> st.english >> st.math;
        v.push_back(st);
    }

    sort(v.begin(), v.end(), comp);

    for(int i=0; i<n; i++){
        cout<<v[i].name<<"\n";
    }
}