//모두제거1 아니면0
function solution(s)
{
    let stk = [];
    for(let i=0; i<s.length; i++){
        if(stk.length===0){
            stk.push(s[i]);
        }else if(stk[stk.length-1]===s[i]){
            stk.pop();
        }else{
            stk.push(s[i]);
        }
    }
    if(stk.length===0)  return 1;
    else return 0;
}