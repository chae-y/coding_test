#include <vector>
#include <iostream>
using namespace std;

int answer=0;

bool isPrime(int n){
    if(n == 2)  return true;
    for(int i=2 ; i*i<n+1; i++){
        if(n%i == 0)    return false;
    }
    return true;
}

int check(vector<int> nums, int i, int s, int n){
    if(n==3){
        if(isPrime(s))  answer++;
        return 0;
    }
    for(int j = i+1; j<nums.size(); j++){
        check(nums, j, s+nums[j], n+1);
    }
    return 0;
}

int solution(vector<int> nums) {

    for(int i=0; i<nums.size(); i++){
        check(nums, i, nums[i], 1);
    }

    return answer;
}