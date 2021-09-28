#include <iostream>

using namespace std;

int arr[81] ={0, };

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                arr[i+j+k]++;
            }
        }
    }
    int result =1;
    int max_sum = 0;
    for(int i=0; i<=a+b+c; i++){
        if(max_sum<arr[i]){
            max_sum = arr[i];
            result = i;
        }
    }
    cout<<result;
    return 0;
}