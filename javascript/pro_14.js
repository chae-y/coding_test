function solution(lines) {
    var answer = 0;
    let start = [];
    let end = [];
    for(let line of lines){
        let [day, time, len] = line.replace('s','').split(' ');
        let [h,m,s] = time.split(':').map((a)=>{
            return Number(parseFloat(a)*1000);
        });
        len =  Number(parseFloat(len)*1000);
        start.push(h*60*60+m*60+s);
        end.push(h*60*60+m*60+s+len);
    }
    
    for(let i=0; i<end.length; i++){
        let section = end[i]+999;
        let cnt = 1;
        for(let j=i+1; j<start.length; j++){
            if(start[j]<section) {
                cnt++;
            }   
            
        }
        answer = Math.max(cnt, answer);
    }
    
    return answer;
}