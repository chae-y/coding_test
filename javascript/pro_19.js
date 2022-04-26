function solution(n, results) {
    var answer = n;
    
    let arr = [];
    for(let i=0; i<n; i++){
        arr[i] = [];
        for(let j=0; j<n; j++){
            arr[i][j] = false;
        }
    }
    
    for(let [win,lose] of results){
        arr[win-1][lose-1] = true;
    }
    
    for(let k=0; k<n; k++){
        for(let i=0; i<n; i++){
            for(let j=0; j<n; j++){
                arr[i][j] = arr[i][j] || (arr[i][k] && arr[k][j])
            }
        }
    }
    
    for(let i=0; i<n; i++){
        for(let j=0; j<n; j++){
            if(i==j)    continue;
            if(!arr[i][j] && !arr[j][i]){
                answer--;
                break;
            }
        }
    }
    
    return answer;
}