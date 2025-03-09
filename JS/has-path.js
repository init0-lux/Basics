// acyclic graph given
// given -> src: f, dst: k
// find path from f to k, if it exists
// can be done using both bf and df ways
const readline = require('readline-sync');
const graph = {
	f: ['g', 'i'],
	g: ['h'],
	h: [],
	i: ['g', 'k'],
	j: ['i'],
	k: []
}

const hasPath = (graph, src, dst) =>{
	if(src === dst) return true;

	for(let neighbour of graph[src])
		if((hasPath(graph, neighbour, dst) === true )) return true;

	return false;
};

const hasPath_bfs = (graph, src, dst) => {
	const queue = [src];

	while(queue.length) {
		const curr = queue.shift();
		if(curr === dst) return true;
		for(let neighbour of graph[curr])
			queue.push(neighbour);
	}

	return false;
};

src = readline.question("enter src: ");
dst = readline.question("enter dst: ");
console.log("path using dfs: ", hasPath(graph, src, dst));
console.log("path using bfs: ", hasPath_bfs(graph, src, dst));
