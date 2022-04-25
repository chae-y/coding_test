function solution(answers) {
    var answer = [];
    let s1=[1,2,3,4,5]
    let s2=[2,1,2,3,2,4,2,5];
    let s3=[3,3,1,1,2,2,4,4,5,5];
    let r1=0, r2=0, r3=0;
    for(let i=0; i<answers.length; i++){
        if(answers[i]===s1[i%5]){
            r1++;
        }
        if(answers[i]===s2[i%8]){
            r2++;
        }
        if(answers[i]===s3[i%10]){
            r3++;
        }
    }
    let maxScore = Math.max(Math.max(r1,r2),r3);
    if(r1===maxScore)   answer.push(1);
    if(r2===maxScore)   answer.push(2);
    if(r3===maxScore)   answer.push(3);
    return answer;
}