#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.

int GCD(int a, int b){
    if(a==0)    return b;
    return GCD(b%a, a);
}

int LCM(int a, int b){
    return a*b/GCD(a,b);
}

int solution(int arr[], size_t arr_len) {
    int answer = 1;
    for(int i=0; i<arr_len; i++){
        answer = LCM(answer, arr[i]);
    }
    return answer;
}