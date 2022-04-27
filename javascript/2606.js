const fs = require('fs');
const inputData = fs.readFileSync(0, 'utf8').toString().trim().split("\n").map(item=>item.split(" ").map(Number));

const n = inputData[0][0]
const pairs = inputData.slice(2)
const graph = [...new Array(n + 1)].map(() => []); 
const visited = [...new Array(n + 1)].fill(0);
let cnt = 0
pairs.forEach(item=> {
    graph[item[0]].push(item[1]); 
    graph[item[1]].push(item[0]);
})

visited[1] = 1
const dfs = (start) => {
    for (const dest of graph[start]) {
        if (!visited[dest]) {
            visited[dest] = 1;
            cnt++
            dfs(dest)
        }
    }
}
dfs(1);
console.log(cnt)