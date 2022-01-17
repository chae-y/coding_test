function solution(n, lost, reserve) {
    var answer = n-lost.length;
    lost = lost.sort((a,b)=>a-b);
    for(let i=0; i<lost.length; i++){
        let temp = reserve.findIndex((n)=>n===lost[i]);
        if(temp!=-1){
           reserve[temp]=-5;
            answer++;
            lost[i]=-10;
        }
    }
    lost.forEach((l)=>{
        let temp = reserve.findIndex((n)=>n+1===l);
        if(temp!=-1){
           reserve[temp]=-1;
            answer++;
            return;
        }
        temp = reserve.findIndex((n)=>n-1===l);
        if(temp!=-1){
           reserve[temp]=-1;
            answer++;
        }
    });
    return answer;
}