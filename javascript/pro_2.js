//최고 최저 순위
//알아볼수 없는거 0
function solution(lottos, win_nums) {
    var answer = [];
    
    lottos = lottos.sort((a,b)=>{
        return a-b;
    });
    win_nums = win_nums.sort((a,b)=>{
        return a-b;
    });
    
    let zero = 0;
    let j = 0;
    let same = 0;
    for(let i=0; i<6; i++){
        if(lottos[i]==0){
            zero++;
        }
        while(win_nums[j]<lottos[i]){
            j++;
            if(j==6) break;
        }
        if(j==6)    break;
        if(win_nums[j]==lottos[i]) same++;
    }
    console.log(same, zero);
    let max = same+zero;
    if(max==0 || max==1){
        answer.push(6);
    }else{
        answer.push(7-max);
    }
    
    if(same==0 || same==1){
        answer.push(6);
    }else{
        answer.push(7-same);
    }
    return answer;
}