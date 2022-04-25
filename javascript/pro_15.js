function solution(participant, completion) {
    var answer = '';
    let map = {};
    for(p of participant){
        if(map[p])  map[p]++;
        else    map[p]=1;
    }
    for(c of completion){
        map[c]--;
    }
    
    for(let name in map){
        if(map[name]!=0){
            return name;
        }
    }
    return answer;
}