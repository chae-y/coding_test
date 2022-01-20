//U X x칸 위에 있는 행 선택
//D X x칸 밑에 있는 행 선택
//C 현재 행 삭제하고 바로 밑(가장 밑이면 그 위)
//Z 가장 최근에 삭제된 행 복구
function solution(n, k, cmd) {
    let answer = "";
    let left = [];
    let right = [];
    let stk = [];
    let arr = [];
    for(let i=0; i<=n+1; i++){
        right[i]=i+1;
        left[i]=i-1;
        arr[i] = true;
    }
    k++;
    for(let str of cmd){
        let tmp=str.split(' ');
        if(tmp[0]==='U'){
            for(let i=0; i<tmp[1]; i++){
                k = left[k];
                if(k===-1){
                    k = right[k];
                    break;
                }
            }
        }
        if(tmp[0]==='D'){
            for(let i=0; i<tmp[1]; i++){
                k = right[k];
                if(k===n+1){
                    k = left[k];
                    break;
                }
            }
        }
        if(tmp[0]==='C'){
            arr[k] = false;
            stk.push(k);
            right[left[k]] = right[k];
            left[right[k]] = left[k];
            k = right[k];
            if(k===n+1){
                k = left[k];
            }
        }
        if(tmp[0]==='Z'){
            let z = stk.pop();
            arr[z] = true;
            right[left[z]]=z;
            left[right[z]]=z;
        }
    }
    for(let i=1; i<=n; i++){
        if(arr[i])  answer+="O";
        else    answer+="X";
    }
    return answer;
}