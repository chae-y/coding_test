function solution(nums) {
    var answer = 0;
    let arr= [...new Set(nums)];
    answer = arr.length<nums.length/2 ? arr.length:nums.length/2;
    return answer;
}