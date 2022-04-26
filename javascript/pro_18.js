function solution(word) {
    var answer = 0;
    let map = {'A':0, 'E':1, 'I':2, 'O':3, 'U':4};
    for(let i=0; i<word.length; i++){ 
        answer+=map[word[i]]*(Math.pow(5,5-i)-1)/4+1;
    }
    return answer;
}