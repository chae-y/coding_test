function solution(dirs) {
    var answer = 0;
    let lr = Array.from(new Array(11),()=>new Array(11).fill(false));
    let ud = Array.from(new Array(11),()=>new Array(11).fill(false));
    let x=5;
    let y=5;
    for(let i=0; i<dirs.length; i++){
        let d = dirs[i];
        if(d==='U'){
            y++;
            if(y===11) y--;
            else if(!ud[x][y-1]){
                ud[x][y-1]=true;
                answer++;
            }
        }
        if(d==='D'){
            y--;
            if(y===-1) y++;
            else if(!ud[x][y]){
                ud[x][y]=true;
                answer++;
            }
        }
        if(d==='L'){
            x--;
            if(x===-1) x++;
            else if(!lr[x][y]){
                lr[x][y]=true;
                answer++;
            }
        }
        if(d==='R'){
            x++;
            if(x===11) x--;
            else if(!lr[x-1][y]){
                lr[x-1][y]=true;
                answer++;
            }
        }
    }
    
    return answer;
}