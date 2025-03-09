// edge list for undirected path

// [x, y] => connection between x and y nodes 
// which can be traversed both ways
const readline = require("readline-sync");
const edges = [
	['i', 'j'], 
	['k', 'i'], 
	['m', 'k'],
	['k', 'l'],
	['o', 'n']
]

// traversals work best on adjacency list forms
// convert
const undirectedPath = (edges, nodeA, nodeB) => {
	const graph = buildGraph(edges);
	return hasPath(graph, nodeA, nodeB, new Set());
};

const buildGraph = (edges) => {
	const graph = {};

	for(let edge of edges){
		const [a, b] = edge;
		if (!(a in graph)) graph[a] = [];
		if (!(b in graph)) graph[b] = [];
		graph[a].push(b);
		graph[b].push(a);
	}

	return graph;
};

// starting traversal
const hasPath = (graph, src, dst, visited) =>{
	if (visited.has(src)) return false;
	if( src === dst ) return true;
	
	visited.add(src);

	for(let neighbour of graph[src])
		if(hasPath(graph, neighbour, dst, visited)) return true;

	return false;
};

src = readline.question("Enter src: ");
dst = readline.question("Enter dst: ");
console.log(undirectedPath(edges, src, dst));
