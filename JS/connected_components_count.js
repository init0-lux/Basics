// given graph with multiple nodes
// find out how many connected hubs are there

const graph = {
	3: [], 
	4: [6], 
	6: [4, 5, 7, 8],
	8: [6],
	7: [6],
	5: [6],
	1: [2],
	2: [1]
};

const connectedComponents = (graph) => {
	let count = 0;
	const visited = new Set();

	//let node in graph returns 3, 4, 6, 8, etc
	for(let node in graph)
		if (traverse(graph, node, visited) === true) count++;

	return count;
};

const traverse = (graph, curr, visited) => {
	if(visited.has(String(curr))) return false;
	
	visited.add(String(curr));

	for(let neighbour of graph[curr]){
		traverse(graph, neighbour, visited);
	}

	return true;
};

console.log(connectedComponents(graph));
