function solution(n) {
    var answer = 0;
    let three = [];
    while(n){
        three.push(n%3);
        n = parseInt(n/3);
    }
    let p=1;
    for(let i=three.length-1; i>=0; i--){
        answer+=(p*three[i]);
        p*=3;
    }
    return answer;
}