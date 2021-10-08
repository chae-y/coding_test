#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int count = 0;
    string s;
    cin >> s;
    int i;
    if(s.size()>2){
        for(i=0; i<s.size()-2; i++){
            if(s[i] == 'c' && s[i+1] == '='){
                i++;
            }
            else if(s[i] == 'c' && s[i+1] == '-'){
                i++;
            }
            else if(s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '='){
                i++;
                i++;
            }
            else if(s[i] == 'd' && s[i+1] == '-'){
                i++;
            }
            else if(s[i] == 'l' && s[i+1] == 'j'){
                i++;
            }
            else if(s[i] == 'n' && s[i+1] == 'j'){
                i++;
            }
            else if(s[i] == 's' && s[i+1] == '='){
                i++;
            }
            else if(s[i] == 'z' && s[i+1] == '='){
                i++;
            }
            count++;
        }
    }
    if(i<=s.size()-2){
        if(s[i] == 'c' && s[i+1] == '='){
            i++;
        }
        else if(s[i] == 'c' && s[i+1] == '-'){
            i++;
        }
        else if(s[i] == 'd' && s[i+1] == '-'){
            i++;
        }
        else if(s[i] == 'l' && s[i+1] == 'j'){
            i++;
        }
        else if(s[i] == 'n' && s[i+1] == 'j'){
            i++;
        }
        else if(s[i] == 's' && s[i+1] == '='){
            i++;
        }
        else if(s[i] == 'z' && s[i+1] == '='){
            i++;
        }
        count++;
        i++;
    }
    if(i<=s.size()-1)  count++;

    cout<<count;
    return 0;
}