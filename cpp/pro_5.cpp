#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

string solution(int n, int k, vector<string> cmd) {
    string answer = "";
    int arr[1000001] = {0, };
    int left[1000001] = {0, };
    int right[1000001] = {0, };
    
    left[0] = -1;
    right[0] = 1;
    for(int i=1; i<n-1; i++){
        left[i] = i-1;
        right[i] = i+1;
    }
    left[n-1] = n-2;
    right[n-1] = -1;
    
    stack<int> stk;
    for(int i=0; i< cmd.size(); i++){
        if(cmd[i][0] == 'U'){
            for(int j=0 ; j<stoi(cmd[i].substr(2)); j++){
                k = left[k];
            }
        }else if(cmd[i][0] == 'D'){
            for(int j=0 ; j<stoi(cmd[i].substr(2)); j++){
                k = right[k];
            }
        }else if(cmd[i][0] == 'C'){
            arr[k] = 1;
            stk.push(k);
            if(right[k] == -1){
                right[left[k]] = -1;
                k = left[k];
            }else if(left[k] == -1){
                left[right[k]] = -1;
                k = right[k];
            }
            else{
                right[left[k]] = right[k];
                left[right[k]] = left[k];
                k = right[k];
            } 
            
        }else { //Z
            int z = stk.top();
            arr[z] = 0;
            if (left[z]!= -1)   right[left[z]] = z;
            if (right[z]!= -1)   left[right[z]] = z;
            stk.pop();
        }
    }
    
    for(int i=0; i<n; i++){
        if(arr[i])
            answer+="X";
        else
            answer+="O";
    }
    return answer;
}