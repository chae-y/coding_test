function solution(record) {
    var answer = [];
    let user = {}
    let inout = [];
    for(let str of record){
        let [a,b,c] = str.split(' ');
        if(a==='Enter'){
            inout.push([b, '님이 들어왔습니다.'])
        }
        if(a==='Leave'){
            inout.push([b, '님이 나갔습니다.'])
        }
        if(c)   user[b] = c;
    }
    for(let temp of inout){
        let [a,b] = temp;
        answer.push(user[a]+b);
    }
    return answer;
}