#include<iostream>
#include<vector>

using namespace std;

int n;
int arr[20][20]={0, };

int cut(int sx, int sy, int ex, int ey, int dir){
    vector<pair<int,int>> v;
    // v.clear();
    int temp=0;
    for(int i=sx; i<=ex; i++){
        for(int j=sy; j<=ey; j++){
            if(arr[i][j] == 1)  v.push_back({i,j});
            else{
                temp+=arr[i][j];
            }
        }
    }

    if(temp==0){//보물없음
        return 0;
    }else if(temp==2 && v.size()==0){//보물 하나만 존재
        return 1;
    }else if(v.size()==0){//불순물 없음
        return 0;
    }//그외 불순물있고 보석도 여러개

    int result = 0;
    if(dir == 0){
        for(pair<int,int> trash : v){
            int x = trash.first;
            int y = trash.second;
            int tmp = 0;
            for(int i=sx; i<=ex; i++){
                tmp+=arr[i][y];
            }
            if(tmp==1){
                result += cut(sx,sy,ex,y-1,1)*cut(sx,y+1,ex,ey,1);
            }
        }
    }
    if(dir == 1){
        for(pair<int,int> trash : v){
            int x = trash.first;
            int y = trash.second;
            int tmp = 0;
            for(int i=sy; i<=ey; i++){
                tmp+=arr[x][i];
            }
            if(tmp==1){
                result += cut(sx,sy,x-1,ey,0)*cut(x+1,sy,ex,ey,0);
            }
        }
    }
    return result;
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int answer = 0;
    answer += cut(0,0,n-1,n-1,0);
    answer += cut(0,0,n-1,n-1,1);
    if(answer==0)   answer=-1;
    cout<<answer;
    return 0;
}