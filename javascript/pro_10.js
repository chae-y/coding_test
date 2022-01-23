function solution(stones, k) {
    let answer = 0;
    if(stones.length<=k)    return Math.max.apply(null,stones);
    let start = 0;
    let end = 200000000;
    while(start<=end){
        let mid = parseInt((start+end)/2);
        let cnt=0;
        for(let i=0; i<stones.length; i++){
            if(stones[i]-mid<0){
                cnt++;
                if(cnt>=k)  break;
            }else{
                cnt=0;
            }
        }
        if(cnt>=k){
            end = mid-1;
        }else{
            start = mid+1;
            answer = mid;
        }
    }
    return answer;
}